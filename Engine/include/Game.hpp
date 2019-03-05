#ifndef	_GAME_HPP_
#define	_GAME_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>

#include "State/StateManager.hpp"

class	Game
{
public:

	explicit Game(const int& win_w = 1920,
		      const int& win_h = 1080,
		      const std::string& win_t = "Example");
	virtual ~Game();
	
	void run();
	sf::RenderWindow& get_window();

private:

	sf::RenderWindow window;
	StateManager state_manager;

};

#endif	// _GAME_HPP_
