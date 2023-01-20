#include "Convert.hpp"
#include <iomanip>

Convert::Convert(std::string input)
	: mInput(input)
	, mDouble(std::strtod(input.c_str(), NULL))
	, mChar(static_cast<char>(mDouble))
	, mInt(static_cast<int>(mDouble))
	, mFloat(static_cast<float>(mDouble))
{
}

Convert::Convert(const Convert& other)
	:mInput(other.mInput)
	, mDouble(other.mDouble)
	, mChar(other.mChar)
	, mInt(other.mInt)
	, mFloat(other.mFloat)
{
}

Convert::~Convert()
{
}

void	Convert::CheckToChar() const
{
	if (std::isprint(mDouble)) {
		std::cout << "char: ";
		std::cout << "'" << mChar << "'" << std::endl;
		return;
	}
	if (mDouble > std::numeric_limits<char>::min() - 1.0 \
		&& mDouble < std::numeric_limits<char>::max() + 1.0) {
		std::cout << "char: ";
		std::cout << "Non displayable" << std::endl;
		return;
	}
	std::cout << "char: ";
	std::cout << "impossible" << std::endl;
}

void	Convert::CheckToInt() const
{
	if (mDouble > std::numeric_limits<int>::min() - 1.0 \
		&& mDouble < std::numeric_limits<int>::max() + 1.0) {
		std::cout << "int: ";
		std::cout << mInt << std::endl;
		return;
	}
	std::cout << "int: ";
	std::cout << "impossible" << std::endl;
}

void	Convert::CheckToFloat() const
{
	if (mDouble != mDouble) {
		std::cout << "float: ";
		std::cout << "nanf" << std::endl;
		return;
	}
	if (mDouble == std::numeric_limits<float>::infinity()) {
		std::cout << "float: ";
		std::cout << "inff" << std::endl;
		return;
	}
	if (mDouble == -std::numeric_limits<float>::infinity()) {
		std::cout << "float: ";
		std::cout << "-inff" << std::endl;
		return;
	}
	if (mDouble < std::numeric_limits<float>::min() \
		&& mDouble > std::numeric_limits<float>::max()) {
		std::cout << "float: ";
		std::cout << "impossible" << std::endl;
		return;
	}
	std::cout << "float: ";
	std::cout << std::fixed << std::setprecision(1) << mFloat << "f" << std::endl;
}

void	Convert::CheckToDouble() const
{
	if (mDouble != mDouble) {
		std::cout << "double: ";
		std::cout << "nan" << std::endl;
		return;
	}
	if (mDouble == std::numeric_limits<double>::infinity()) {
		std::cout << "double: ";
		std::cout << "inf" << std::endl;
		return;
	}
	if (mDouble == -std::numeric_limits<double>::infinity()) {
		std::cout << "double: ";
		std::cout << "-inf" << std::endl;
		return;
	}
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << mDouble << std::endl;
}

void	Convert::PrintConvertedRawNum() const
{
	std::cout << "******* My test *******" << std::endl;
	std::cout << "This is raw value!" << std::endl;
	std::cout << "char: "  << mChar << std::endl;
	std::cout << "int: "  << mInt << std::endl;
	std::cout << "float: "  << mFloat << std::endl;
	std::cout << "double: "  << mDouble << std::endl;
	std::cout << "******* My test *******" << std::endl;
}

Convert::Convert()
{
}

Convert&	Convert::operator=(const Convert& rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}

