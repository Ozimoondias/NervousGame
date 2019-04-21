#include "../include/State/StateMenu.hpp"

StateMenu::StateMenu(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/menu.png"))
		;//return -1;
	bgs.setTexture(bgt);
	
	button_manager.add_button(
		100, 100, "play",
		[&](){ change_c_state(EState::State::Play); });
	button_manager.add_button(
		100, 300, "suce 2",
		[](){std::cout << "Button 2 clicked!" << std::endl;});
	button_manager.add_button(
		100, 500, "suce 3",
		[](){std::cout << "Button 3 clicked!" << std::endl;});
	button_manager.add_button(
		100, 700, "suce 4",
		[](){std::cout << "Button 4 clicked!" << std::endl;});
	
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
	button_manager.event(event);
}

void StateMenu::update()
{
	//std::cout << "Update StateMenu" << std::endl;
}

void StateMenu::draw(sf::RenderWindow &win)
{
	//std::cout << "Draw StateMenu" << std::endl;

	win.draw(bgs);
	button_manager.draw(win);
}
