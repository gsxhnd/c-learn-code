#include <boost/function.hpp>
#include <iostream>

using namespace std;

void func() { cout << "hello,boost c++." << endl; }

int main(int argc, char *argv[]) {
  boost::function<void()> f;
  f = func;
  f();
  return 0;
}