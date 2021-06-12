#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int i_value)
{
	std::cout << "Int constructor called" << std::endl;
	this->value = i_value << this->f_bits;
}

Fixed::Fixed(const float f_value)
{
	std::cout << "Float constructor called" << std::endl;
	this->value = roundf(f_value * (1 << this->f_bits));
}

Fixed::Fixed(const Fixed &_fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->value = _fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &_fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this == &_fixed)
		return (*this);
	this->value = _fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->value / (float)(1 << this->f_bits);
}

int Fixed::toInt(void) const
{
	return (int)(this->value >> this->f_bits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &_fixed)
{
	out << _fixed.toFloat();
	return (out);
}