#include "../include/State/StatePause.hpp"

StatePause::StatePause()
{
	std::cout << "C StatePause" << std::endl;
}

StatePause::~StatePause()
{
	std::cout << "D StatePause" << std::endl;
}

void StatePause::update()
{
	std::cout << "U StatePause" << std::endl;
}

void StatePause::render()
{
	std::cout << "R StatePause" << std::endl;
}
