#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int f_bits;

public:
	Fixed();
	Fixed(const Fixed &_fixed);
	~Fixed();
	Fixed &operator=(const Fixed &_fixed);

	int getRawBits(void) const;
	void seRawBits(int const raw);
};

#endif