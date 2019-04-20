#ifndef _BUTTONMANGER_HPP_
#define _BUTTONMANGER_HPP_

#include <vector>
#include <memory>

#include "Button.hpp"

class ButtonManager
{
public:

	explicit ButtonManager();
	virtual ~ButtonManager();

	void event(sf::Event&);
	void draw(sf::RenderWindow&);

	void add_button(int, int, std::string, std::function<void(void)>);
	
private:

	int i;
	int test;
	
	sf::Shader shader;
	std::vector<std::shared_ptr<Button>> buttons;

};

#endif	// _BUTTONMANGER_HPP_
