#include "Convert.hpp"

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
	//, mChar()
	//, mInt()
	//, mFloat()
	//, mDouble()
{
}

Convert::~Convert()
{
}

void	Convert::CheckToChar() const
{
	// if (mDouble != mDouble) {
	// 	std::cout << "char: ";
	// 	std::cout << "impossible" << std::endl;
	// 	return;
	// }
	if (std::isprint(mDouble)) {
		std::cout << "char: ";
		std::cout << "'" << mChar << "'" << std::endl;
		return;
	}
	if (mDouble >=  std::numeric_limits<char>::min() || mDouble <= std::numeric_limits<char>::max()) {
		std::cout << "char: ";
		std::cout << "Non displayable" << std::endl;
		return;
	}
	// std::cout << "char: ";
	// std::cout << "impossible" << std::endl;
}

//int	Convert::CheckToInt() const
//{

//}

//float	Convert::CheckToFloat() const
//{

//}

//double	Convert::CheckToDouble() const
//{

//}

void	Convert::PrintConvertedRawNum() const
{
	std::cout << "****************" << std::endl;
	std::cout << "This is raw value!" << std::endl;
	std::cout << "char: "  << mChar << std::endl;
	std::cout << "int: "  << mInt << std::endl;
	std::cout << "float: "  << mFloat << std::endl;
	std::cout << "double: "  << mDouble << std::endl;
	std::cout << "****************" << std::endl;
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

