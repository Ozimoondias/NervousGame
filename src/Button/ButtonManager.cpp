#include "Button/ButtonManager.hpp"

ButtonManager::ButtonManager()
{
	i = 0;
	test = 0;

	if (!shader.loadFromFile("../res/example_002.frag",
				 sf::Shader::Fragment))
		throw std::invalid_argument("ButtonManager shader.loadFromFile");
	if (!shader.isAvailable())
		throw std::invalid_argument("ButtonManager shader.isAvailable");
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
		if (event.key.code == sf::Keyboard::Enter)
			buttons[i]->get_function()();
	}
}

void ButtonManager::update(sf::Time &dt)
{
	shader.setUniform("time", dt.asSeconds());
}

void ButtonManager::draw(sf::RenderWindow &win)
{
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
