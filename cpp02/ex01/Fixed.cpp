#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
    return ;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return ;
}

Fixed::Fixed(int const n)
{
    std::cout << "Int constructor called" << std::endl;
    this->_value = n << this->_fractional_bits;
    return ;
}

Fixed::Fixed(float const n)
{
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(n * (1 << this->_fractional_bits));
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed &Fixed::operator=(Fixed const &src)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = src.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return this->_value;
}

void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
    return ;
}

float Fixed::toFloat(void) const
{
    return (float)this->_value / (1 << this->_fractional_bits);
}

int Fixed::toInt(void) const
{
    return this->_value >> this->_fractional_bits;
}

std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
    o << src.toFloat();
    return o;
}
