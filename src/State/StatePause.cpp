#include "State/StatePause.hpp"

StatePause::StatePause(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/pause.png"))
		;//return -1;
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

void StatePause::update()
{
	//std::cout << "Update StatePause" << std::endl;
}

void StatePause::draw(sf::RenderWindow &win)
{
	//std::cout << "Draw StatePause" << std::endl;

	win.draw(bgs);
}
