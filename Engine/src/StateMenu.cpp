#include "../include/State/StateMenu.hpp"

StateMenu::StateMenu()
{
	std::cout << "Constructor StateMenu" << std::endl;
}

StateMenu::~StateMenu()
{
	std::cout << "Destructor StateMenu" << std::endl;
}

void StateMenu::init()
{
	std::cout << "Init StateMenu" << std::endl;
}

void StateMenu::clean()
{
	std::cout << "Clean StateMenu" << std::endl;
}

void StateMenu::event()
{
	std::cout << "Event StateMenu" << std::endl;
}

void StateMenu::update()
{
	std::cout << "Update StateMenu" << std::endl;
}

void StateMenu::draw()
{
	std::cout << "Draw StateMenu" << std::endl;
}
