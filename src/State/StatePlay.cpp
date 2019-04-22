#include "../include/State/StatePlay.hpp"

StatePlay::StatePlay(StateManager &sm)
	: IState(sm)
{
	if (!bgt.loadFromFile("../res/play.png"))
                throw std::invalid_argument("StatePlay bgt.loadFromFile");
	bgs.setTexture(bgt);

	button_manager.add_button(
		100, 100, "solo",
		[&](){ change_c_state(EState::State::Solo); });
	button_manager.add_button(
		100, 300, "multi",
		[&](){ change_c_state(EState::State::Multi); });

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
                if (event.key.code == sf::Keyboard::Escape)
                        change_c_state(EState::State::Menu);
	button_manager.event(event);
}

void StatePlay::update(sf::Time &dt)
{
	button_manager.update(dt);
}

void StatePlay::draw(sf::RenderWindow &win)
{
	win.draw(bgs);
	button_manager.draw(win);
}

EState::State StatePlay::get_EState()
{
	return EState::State::Play;
}
