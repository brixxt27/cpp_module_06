#include "Data.h"

static uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

static Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data        data = { 42, "42Seoul jayoon" };
	Data*		original = &data;
	uintptr_t   serialized_data;
	Data*		converted_data;
	
	serialized_data = serialize(original);
	converted_data = deserialize(serialized_data);

	std::cout << "key: " << data.key << std::endl;
	std::cout << "str: " << data.str << std::endl;

	if (original != converted_data) {
		std::cout << "They are different!" << std::endl;
		return 1;
	}

	std::cout << "key: " << data.key << std::endl;
	std::cout << "str: " << data.str << std::endl;
	std::cout << std::hex << std::uppercase << "Serialized data is " << serialized_data << std::endl;
	return 0;
}