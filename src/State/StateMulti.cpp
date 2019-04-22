#include "../include/State/StateMulti.hpp"

StateMulti::StateMulti(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/multi.png"))
		throw std::invalid_argument("StateMulti bgt.loadFromFile");
	bgs.setTexture(bgt);

	button_manager.add_button(
		100, 100, "host",
		[&](){ change_c_state(EState::State::Host); });
	button_manager.add_button(
		100, 300, "find",
		[&](){ change_c_state(EState::State::Find); });

	std::cout << "Constructor StateMulti" << std::endl;
}

StateMulti::~StateMulti()
{
	std::cout << "Destructor StateMulti" << std::endl;
}

void StateMulti::init()
{
	std::cout << "Init StateMulti" << std::endl;
}

void StateMulti::clean()
{
	std::cout << "Clean StateMulti" << std::endl;
}

void StateMulti::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
                if (event.key.code == sf::Keyboard::Escape)
                        change_c_state(EState::State::Play);
	button_manager.event(event);
}

void StateMulti::update(sf::Time &dt)
{
	button_manager.update(dt);
}

void StateMulti::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
	button_manager.draw(win);
}

EState::State StateMulti::get_EState()
{
	return EState::State::Multi;
}
