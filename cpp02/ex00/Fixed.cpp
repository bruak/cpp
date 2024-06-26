#include "Fixed.hpp"

Fixed::Fixed(void) : fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;

    return;
}

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;

    return;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;

    return;
}

/*
a.operator(b)
*/
Fixed &Fixed::operator = (Fixed const &rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if (this != &rhs)
        this->fixedValue = rhs.getRawBits(); // polimorfizm

    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return this->fixedValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
     
    this->fixedValue = raw;

    return;
}