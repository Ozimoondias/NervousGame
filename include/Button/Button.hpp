#ifndef _BUTTON_HPP_
#define _BUTTON_HPP_

#include <functional>

#include <SFML/Graphics.hpp>

class	Button
{
public:

	explicit Button(int, int, std::string, std::function<void(void)>);
	virtual ~Button();

	void draw(sf::RenderWindow&);
	std::function<void(void)> get_function();

private:

	sf::Font	font;
	sf::Text	text;

	sf::Texture     texture;
	sf::Sprite      sprite;

	std::function<void(void)> function = [](){};

};

#endif	// _BUTTON_HPP_
