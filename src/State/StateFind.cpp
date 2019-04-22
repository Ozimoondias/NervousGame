#include "../include/State/StateFind.hpp"

StateFind::StateFind(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/find.png"))
		throw std::invalid_argument("StateFind bgt.loadFromFile");
	bgs.setTexture(bgt);
	
	std::cout << "Constructor StateFind" << std::endl;
}

StateFind::~StateFind()
{
	std::cout << "Destructor StateFind" << std::endl;
}

void StateFind::init()
{
	std::cout << "Init StateFind" << std::endl;
}

void StateFind::clean()
{
	std::cout << "Clean StateFind" << std::endl;
}

void StateFind::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
                if (event.key.code == sf::Keyboard::Escape)
                        change_c_state(EState::State::Multi);
}

void StateFind::update(sf::Time &dt)
{
}

void StateFind::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
}

EState::State StateFind::get_EState()
{
	return EState::State::Find;
}
