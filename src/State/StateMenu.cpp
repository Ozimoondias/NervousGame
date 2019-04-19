#include "../include/State/StateMenu.hpp"

StateMenu::StateMenu(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/menu.png"))
		;//return -1;
	bgs.setTexture(bgt);
	
	buttons.push_back(
		std::make_shared<Button>(
			100, 100, "suce 1",
			[](){std::cout << "Button 1 clicked!" << std::endl;})
		);
	buttons.push_back(
		std::make_shared<Button>(
			100, 300, "Suce 2",
			[](){std::cout << "Button 1 clicked!" << std::endl;})
		);
	buttons.push_back(
		std::make_shared<Button>(
			100, 500, "Suce 3",
			[](){std::cout << "Button 1 clicked!" << std::endl;})
		);
	buttons.push_back(
		std::make_shared<Button>(
			100, 700, "Suce 4",
			[](){std::cout << "Button 1 clicked!" << std::endl;})
		);
	
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
	//std::cout << "Update StateMenu" << std::endl;
}

void StateMenu::draw(sf::RenderWindow &win)
{
	//std::cout << "Draw StateMenu" << std::endl;

	win.draw(bgs);
	for (auto const& it : buttons)
		it->draw(win);
}
