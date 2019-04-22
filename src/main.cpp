#include "Game.hpp"
#include <stdexcept>

int	main()
{
	try
	{
		Game test(1920, 1080);
		test.run();
	}

	catch (std::exception &e)
	{
		std::cout << "\033[1;31m"
			  << e.what()
			  << "\033[0m"
			  << std::endl;
		return -1;
	}

	return 0;
}
