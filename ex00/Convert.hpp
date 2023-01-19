#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

class Convert
{
public:
	Convert(std::string mInput);
	Convert(const Convert& other);
	virtual ~Convert();

private:
	const std::string	mInput;
	
	Convert();
	Convert&	operator=(const Convert& rhs);
};

#endif
