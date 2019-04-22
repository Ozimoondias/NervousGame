#include "State/StatePause.hpp"

StatePause::StatePause(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/pause.png"))
		throw std::invalid_argument("StatePause bgt.loadFromFile");
	bgs.setTexture(bgt);

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
	if (event.type == sf::Event::KeyPressed)
        {
                if (event.key.code == sf::Keyboard::Escape)
                {
                        std::cout << "PAUSE the escape key was pressed" << std::endl;
                        change_c_state(EState::State::Play);
                }
                if (event.key.code == sf::Keyboard::Enter)
                {
                        std::cout << "PAUSE the enter key was pressed" << std::endl;
                        change_c_state(EState::State::Menu);
                }
	}
}

void StatePause::update(sf::Time &dt)
{
}

void StatePause::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
}

EState::State StatePause::get_EState()
{
	return EState::State::Pause;
}
