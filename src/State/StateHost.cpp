#include "../include/State/StateHost.hpp"

StateHost::StateHost(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/host.png"))
		throw std::invalid_argument("StateHost bgt.loadFromFile");
	bgs.setTexture(bgt);
	
	std::cout << "Constructor StateHost" << std::endl;
}

StateHost::~StateHost()
{
	std::cout << "Destructor StateHost" << std::endl;
}

void StateHost::init()
{
	std::cout << "Init StateHost" << std::endl;
}

void StateHost::clean()
{
	std::cout << "Clean StateHost" << std::endl;
}

void StateHost::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
                if (event.key.code == sf::Keyboard::Escape)
                        change_c_state(EState::State::Multi);
}

void StateHost::update(sf::Time &dt)
{
}

void StateHost::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
}

EState::State StateHost::get_EState()
{
	return EState::State::Host;
}
