#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called " << std::endl;
    this->value = roundf(value * (1 << this->bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->value = fixed.getRawBits();
    return *this;

}

int Fixed::getRawBits() const
{
    return this->value;
}

void Fixed::setRawBits(const int raw)
{
    this->value = raw;
}

float Fixed::toFloat() const
{
    return ((float) this->value / (float)(1 << this->bits));
}

int Fixed::toInt() const
{
    return (this->value >> this->bits);
}

std::ostream &operator << (std::ostream &outStream, const Fixed &fixed)
{
    outStream << fixed.toFloat();
    return (outStream);
}
