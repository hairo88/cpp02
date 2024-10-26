#include "Fixed.hpp"

int main( void ) {
    Fixed a(3.123f);
    Fixed b(4.321f);
    if (a > b)
        std::cout << 1 << std::endl;
    else
        std::cout << "no" << std::endl;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c = a + b;
    std::cout << c << std::endl;
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}