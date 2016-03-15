#include "stdafx.h"
#include "Replace.h"
#include <iostream>
#include <iterator>

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		std::cout << "Error: Invalid number of arguments!" << std::endl
			<< "Usage: replace.exe <searchString> <replacmentString>" << std::endl;
		return 1;
	}
	std::string readStr;
	getline(std::cin, readStr);
	FindAndReplace(readStr, argv[1], argv[2]);
	std::cout << readStr << std::endl;

	return 0;
}
