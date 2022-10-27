#include "Fixed.hpp"

Fixed::Fixed(): value(0)
{

}

Fixed::Fixed(const int value)
{
    this->value = value << this->bits;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << this->bits));
}

Fixed::~Fixed()
{

}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
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

Fixed &Fixed::operator++(void)
{
    this->value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp;
    temp.setRawBits(this->value++);
    return (temp);
}


Fixed &Fixed::operator--(void)
{
    this->value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp;
    temp.setRawBits(this->value--);
    return (temp);
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (this->value > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (this->value < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (this->value >= fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (this->value <= fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (this->value == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (this->value != fixed.getRawBits());
}

const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a <= b)
        return (a);
    return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a <= b)
        return (a);
    return (b);
}

const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a >= b)
        return (a);
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a >= b)
        return (a);
    return (b);
}
