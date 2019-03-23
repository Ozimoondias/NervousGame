#include "../include/State/StateMenu.hpp"

StateMenu::StateMenu(StateManager &sm)
	: IState(sm)
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

void StateMenu::event(sf::Event &event)
{
	//std::cout << "Event StateMenu" << std::endl;

	if (event.type == sf::Event::KeyPressed)
	{
		if (event.key.code == sf::Keyboard::Enter)
		{
			std::cout << "MENU the enter key was pressed" << std::endl;
			change_c_state(EState::State::Play);
		}
	}
}

void StateMenu::update()
{
	std::cout << "Update StateMenu" << std::endl;
}

void StateMenu::draw()
{
	std::cout << "Draw StateMenu" << std::endl;
}
