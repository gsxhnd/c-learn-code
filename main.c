#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <uv.h>

uv_fs_t open_req;

void on_open(uv_fs_t *req) {
    if (req->result >= 0) {
        printf("file fd: %i", req->result);
    } else {
        fprintf(stderr, "error open file: %s\n", uv_strerror((int) req->result));
    }
}

int main() {
    uv_fs_open(uv_default_loop(), &open_req, "./test.json", O_RDONLY, 0, on_open);
    uv_run(uv_default_loop(), UV_RUN_DEFAULT);
    return 0;
}
