
#include <iostream>
#include <stdexcept>
#include "delay.h"

// entry point
auto main()->int
{
	try
	{
		std::cout << "\n\thow much time (in seconds) would you like to delay? ";
		auto x{ 0.0 };
		std::cin >> x;
		std::cout << "\n\n\tok! count for yourself...";
		delay(x);
		std::cout << "\n\n\tok! it passed, that's it, that's all!\n\n";
		
		return EXIT_SUCCESS;
	}
	catch (const std::exception& xxx)
	{
		std::cerr << xxx.what() << std::endl;
		return EXIT_FAILURE;
	}
}
