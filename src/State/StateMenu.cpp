#include "../include/State/StateMenu.hpp"

StateMenu::StateMenu(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/menu.png"))
		throw std::invalid_argument("StateMenu bgt.loadFromFile");
	bgs.setTexture(bgt);
	
	button_manager.add_button(
		100, 100, "play",
		[&](){ change_c_state(EState::State::Play); });
	button_manager.add_button(
		100, 300, "option",
		[&](){ change_c_state(EState::State::Option); });
	button_manager.add_button(
		100, 500, "exit",
		[&](){ change_c_state(EState::State::Exit); });
	
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

void StateMenu::update(sf::Time &dt)
{
	button_manager.update(dt);
}

void StateMenu::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
	button_manager.draw(win);
}

EState::State StateMenu::get_EState()
{
	return EState::State::Menu;
}
