#include "Button/Button.hpp"

Button::Button(int x, int y, std::string t,
	       std::function<void(void)> f)
{
	if (!texture.loadFromFile("../res/button.png"))
		;//return -1;
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(x, y));

	if (!font.loadFromFile("../res/arcade.ttf"))
		;// erreur...
	text.setFont(font);
	text.setString(t);
	text.setPosition(sf::Vector2f(x, y));

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
	sf::Texture tex;
	tex.loadFromFile("../res/button.png");
	sf::Sprite spr(tex);


	sf::RenderStates states;
        states.shader = &shader;

	//win.draw(sprite, &shader);
	win.draw(spr, states);
	//win.draw(text, &shader);
}

std::function<void(void)> Button::get_function()
{
	return function;
}
