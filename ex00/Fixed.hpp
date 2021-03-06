#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int f_bits = 8;

public:
	Fixed();
	Fixed(const Fixed &_fixed);
	~Fixed();
	Fixed &operator=(const Fixed &_fixed);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif