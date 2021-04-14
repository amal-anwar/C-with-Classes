#include <iostream>

int main() {
  int x = 73;
  int y = 42;
  int *ip = &x;
    std::cout << "x = " << x ;
    std::cout << "\ny = " << y ;
    std::cout << "\n*ip = " << *ip ;
    return 0;
}
