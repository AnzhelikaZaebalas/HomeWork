#include <iostream>

int main(void) {
double **p = 0;
*( *( p = new double* ) = new double ) = 2;
std::cout << **p << std::endl;
delete *p;
delete p;
}