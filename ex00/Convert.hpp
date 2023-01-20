#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <limits>

class Convert
{
public:
	Convert(std::string mInput);
	Convert(const Convert& other);
	virtual ~Convert();
	
	void	CheckToChar() const;
	void	CheckToInt() const;
	void	CheckToFloat() const;
	void	CheckToDouble() const;

	void	PrintConvertedRawNum() const;

private:
	const std::string	mInput;
	double	mDouble;
	char	mChar;
	int		mInt;
	float	mFloat;

	Convert();
	Convert&	operator=(const Convert& rhs);
};

#endif
