#ifndef	_GAME_HPP_
#define	_GAME_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>

class	Game
{
public:
	explicit Game(const std::string& win_t = "Example",
		      const int& win_w = 1920,
		      const int& win_h = 1080);
	virtual ~Game();
	
	const sf::RenderWindow& get_window() const;
private:
	sf::RenderWindow window;
};

#endif	// _GAME_HPP_
