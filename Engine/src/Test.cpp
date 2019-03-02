#include "../include/Test.hpp"

Test::Test()
{
	std::cout << "C Test" << std::endl;

	EngineRender	test("test", 500, 500);

	while (42)
	{
	}
}

Test::~Test()
{
	std::cout << "D Test" << std::endl;
}
