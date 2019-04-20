#include "Button/ButtonManager.hpp"
#include <iostream>

sf::Clock ccc;

ButtonManager::ButtonManager()
{
	i = 0;
	test = 0;

	if (!shader.loadFromFile("../res/shader.gt", sf::Shader::Fragment))
		;// erreur...
}

ButtonManager::~ButtonManager()
{
}

void ButtonManager::event(sf::Event &event)
{
	if (event.type == sf::Event::KeyPressed)
	{
		if (event.key.code == sf::Keyboard::Up)
			if (i != 0)
				i -= 1;
		if (event.key.code == sf::Keyboard::Down)
			if (i != buttons.size() - 1)
				i += 1;
	}
}

void ButtonManager::draw(sf::RenderWindow &win)
{
	shader.setUniform("time", ccc.getElapsedTime().asSeconds());

	for (int it = 0; it < buttons.size(); ++it)
	{
		if (i != it)
			buttons[it]->draw(win);
		else
			buttons[it]->draw(win, shader);
	}
}

void ButtonManager::add_button(int x, int y, std::string t,
			       std::function<void(void)> f)
{
	buttons.push_back(std::make_shared<Button>(x, y, t, f));
}
