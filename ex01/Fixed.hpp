#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int f_bits = 8;

public:
	Fixed();
	Fixed(const int i_value);
	Fixed(const float f_value);
	Fixed(const Fixed &_fixed);
	~Fixed();
	Fixed &operator=(const Fixed &_fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);

	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &_fixed);

#endif