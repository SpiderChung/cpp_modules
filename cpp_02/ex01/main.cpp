#include "Fixed.hpp"

int main( void ) {
    Fixed a;
    Fixed const b( 10 );
    Fixed const c( 42.4f );
    Fixed const d( b );
    a = Fixed( 1234.4321f );
    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;
    return 0;
}
//100110100 10.01101110000 101010.01100110011
//100110100.10011011101
//10011010010.01101110000 10101001100110.01100110011
//10011010010 01101111
//           100000000
//10011010010 01101111
//1001101001001101111
//            000000001

//100110100.10011011101

// 101010.01101011100
// 100000000
// 101010 01101011.1

// 101010 01101100
//  1100
