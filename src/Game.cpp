#include "Game.hpp"

Game::Game(const int& win_w,
	   const int& win_h,
	   const std::string& win_t)
{
	std::cout << "Constructor Game" << std::endl;
	
	window.create(sf::VideoMode(win_w, win_h), win_t);
	window.setFramerateLimit(60);
}

Game::~Game()
{
	std::cout << "Desctructor Game" << std::endl;
}

void Game::run()
{
	while (window.isOpen()
	       && state_manager.get_c_state()->get_EState()
	       != EState::State::Exit)
	{
		event();
		update();
		draw();
	}
}

void Game::event()
{
	sf::Event event;

	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();
		else
			state_manager.get_c_state()->event(event);
	}
		

}

void Game::update()
{
	sf::Time time;

	time = clock.getElapsedTime();
	state_manager.get_c_state()->update(time);
}

void Game::draw()
{
	window.clear();
	state_manager.get_c_state()->draw(window);
	window.display();
}

sf::RenderWindow& Game::get_window()
{
	return window;
}
