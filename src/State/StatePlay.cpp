#include "../include/State/StatePlay.hpp"

StatePlay::StatePlay(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/play.png"))
		;//return -1;
	bgs.setTexture(bgt);

	std::cout << "Constructor StatePlay" << std::endl;
}

StatePlay::~StatePlay()
{
	std::cout << "Destructor StatePlay" << std::endl;
}

void StatePlay::init()
{
	std::cout << "Init StatePlay" << std::endl;
}

void StatePlay::clean()
{
	std::cout << "Clean StatePlay" << std::endl;
}

void StatePlay::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
        {
                if (event.key.code == sf::Keyboard::Escape)
                {
                        std::cout << "PLAY the escape key was pressed" << std::endl;
                        change_c_state(EState::State::Pause);
                }
        }
}

void StatePlay::update()
{
	//std::cout << "Update StatePlay" << std::endl;
}

void StatePlay::draw(sf::RenderWindow &win)
{
	//std::cout << "Draw StatePlay" << std::endl;

	win.draw(bgs);
}
