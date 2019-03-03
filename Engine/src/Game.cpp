#include "../include/Game.hpp"

Game::Game(const std::string& win_t,
	   const int& win_w,
	   const int& win_h)
{
	std::cout << "C Game" << std::endl;

	this->window.create(sf::VideoMode(win_w, win_h), win_t);
	this->window.setFramerateLimit(60);
}

Game::~Game()
{
	std::cout << "D Game" << std::endl;
}

const sf::RenderWindow& Game::get_window() const
{
	return window;
}

void Game::run()
{
	std::cout << "ML Game" << std::endl;

	while (this->window.isOpen())
	{
		this->window.clear();
		this->window.display();
	}
}
