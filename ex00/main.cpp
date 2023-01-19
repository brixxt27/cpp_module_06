#include "Convert.hpp"

int	main(int argc, char* argv[])
{
	if (argc != 2) {
		std::cout << "Please, put in two arguments!";
		return 1;
	}

	Convert	converter(argv[1]);

	//converter.PrintConvertedRawNum();

	converter.CheckToChar();
	//converter.CheckToInt();
	//converter.CheckToFloat();
	//converter.CheckToDouble();
}
