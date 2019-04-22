#include "Button/Button.hpp"

Button::Button(int x, int y, std::string t,
	       std::function<void(void)> f)
{
	if (!texture.loadFromFile("../res/button.png"))
		throw std::invalid_argument("Button texture.loadFromFile");
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(x, y));

	sf::FloatRect bounds = sprite.getLocalBounds();
	if (!font.loadFromFile("../res/arcade.ttf"))
		throw std::invalid_argument("Button font.loadFromFile");
	text.setFont(font);
	text.setString(t);
	text.setPosition(
		x + (bounds.width / 3),
		y + (bounds.height / 3));

	function = f;
}

Button::~Button()
{
}

void Button::draw(sf::RenderWindow &win)
{
	win.draw(sprite);
	win.draw(text);
}

void Button::draw(sf::RenderWindow &win, sf::Shader &shader)
{
	win.draw(sprite, &shader);
	win.draw(text);
}

std::function<void(void)> Button::get_function()
{
	return function;
}
