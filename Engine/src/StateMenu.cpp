#include "../include/State/StateMenu.hpp"

StateMenu::StateMenu()
{
	std::cout << "C StateMenu" << std::endl;
}

StateMenu::~StateMenu()
{
	std::cout << "D StateMenu" << std::endl;
}

void StateMenu::update()
{
	std::cout << "U StateMenu" << std::endl;
}

void StateMenu::render()
{
	std::cout << "R StateMenu" << std::endl;
}
