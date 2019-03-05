#include "../include/State/StatePause.hpp"

StatePause::StatePause()
{
	std::cout << "Constructor StatePause" << std::endl;
}

StatePause::~StatePause()
{
	std::cout << "Destructor StatePause" << std::endl;
}

void StatePause::init()
{
	std::cout << "Init StatePause" << std::endl;
}

void StatePause::clean()
{
	std::cout << "Clean StatePause" << std::endl;
}

void StatePause::event()
{
	std::cout << "Event StatePause" << std::endl;
}

void StatePause::update()
{
	std::cout << "Update StatePause" << std::endl;
}

void StatePause::draw()
{
	std::cout << "Draw StatePause" << std::endl;
}
