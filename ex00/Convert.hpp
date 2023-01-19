#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
public:
	Convert(std::string mInput);
	Convert(const Convert& other);
	virtual ~Convert();
	
	void	CheckToChar() const;
	//int	CheckToInt() const;
	//float	CheckToFloat() const;
	//double	CheckToDouble() const;

	//char	PrintToChar() const;
	//int	PrintToInt() const;
	//float	PrintToFloat() const;
	//double	PrintToDouble() const;

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
