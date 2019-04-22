#include "../include/State/StateOption.hpp"

StateOption::StateOption(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/option.png"))
		throw std::invalid_argument("StateOption bgt.loadFromFile");
	bgs.setTexture(bgt);
	
	std::cout << "Constructor StateOption" << std::endl;
}

StateOption::~StateOption()
{
	std::cout << "Destructor StateOption" << std::endl;
}

void StateOption::init()
{
	std::cout << "Init StateOption" << std::endl;
}

void StateOption::clean()
{
	std::cout << "Clean StateOption" << std::endl;
}

void StateOption::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
                if (event.key.code == sf::Keyboard::Escape)
                        change_c_state(EState::State::Menu);
}

void StateOption::update(sf::Time &dt)
{
}

void StateOption::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
}

EState::State StateOption::get_EState()
{
	return EState::State::Option;
}
