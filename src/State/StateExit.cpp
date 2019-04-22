#include "../include/State/StateExit.hpp"

StateExit::StateExit(StateManager &sm)
	: IState(sm)
{
	std::cout << "Constructor StateExit" << std::endl;
}

StateExit::~StateExit()
{
	std::cout << "Destructor StateExit" << std::endl;
}

void StateExit::event(sf::Event &event)
{
}

void StateExit::update(sf::Time &dt)
{
}

void StateExit::draw(sf::RenderWindow &win)
{
}

EState::State StateExit::get_EState()
{
	return EState::State::Exit;
}
