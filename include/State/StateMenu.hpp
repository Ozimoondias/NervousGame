#ifndef _STATE_MENU_HPP_
#define _STATE_MENU_HPP_

#include "IState.hpp"
#include "Button/ButtonManager.hpp"

#include <list>

class StateMenu : public IState
{
public:

        explicit StateMenu(StateManager&);
	virtual ~StateMenu();

	void init();
	void clean();

	void event(sf::Event&);
	void update();
	void draw(sf::RenderWindow&);

private:

	sf::Sprite	bgs;
	sf::Texture	bgt;
	ButtonManager	button_manager;

};

#endif // _STATE_MENU_HPP_
