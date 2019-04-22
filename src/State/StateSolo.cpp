#include "../include/State/StateSolo.hpp"

StateSolo::StateSolo(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/solo.png"))
		throw std::invalid_argument("StateSolo bgt.loadFromFile");
	bgs.setTexture(bgt);
	
	std::cout << "Constructor StateSolo" << std::endl;
}

StateSolo::~StateSolo()
{
	std::cout << "Destructor StateSolo" << std::endl;
}

void StateSolo::init()
{
	std::cout << "Init StateSolo" << std::endl;
}

void StateSolo::clean()
{
	std::cout << "Clean StateSolo" << std::endl;
}

void StateSolo::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
                if (event.key.code == sf::Keyboard::Escape)
                        change_c_state(EState::State::Play);
}

void StateSolo::update(sf::Time &dt)
{
}

void StateSolo::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
}

EState::State StateSolo::get_EState()
{
	return EState::State::Solo;
}
