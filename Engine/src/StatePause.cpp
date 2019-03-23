#include "../include/State/StatePause.hpp"

StatePause::StatePause(StateManager &sm)
	: IState(sm)
{
	std::cout << "Constructor StatePause" << std::endl;
}

StatePause::~StatePause()
{
	std::cout << "Destructor StatePause" << std::endl;
}

void StatePause::init()
{
	std::cout << "Init StatePause" << std::endl;
}

void StatePause::clean()
{
	std::cout << "Clean StatePause" << std::endl;
}

void StatePause::event(sf::Event &event)
{
	//std::cout << "Event StatePause" << std::endl;

	if (event.type == sf::Event::KeyPressed)
        {
                if (event.key.code == sf::Keyboard::Escape)
                {
                        std::cout << "PAUSE the escape key was pressed" << std::endl;
                        change_c_state(EState::State::Play);
                }
	}
}

void StatePause::update()
{
	std::cout << "Update StatePause" << std::endl;
}

void StatePause::draw()
{
	std::cout << "Draw StatePause" << std::endl;
}
