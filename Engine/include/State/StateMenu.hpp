#ifndef _STATE_MENU_HPP_
#define _STATE_MENU_HPP_

#include "IState.hpp"

class StateMenu : public IState
{
public:

        explicit StateMenu(StateManager&);
	virtual ~StateMenu();

	void init();
	void clean();

	void event(sf::Event&);
	void update();
	void draw();
};

#endif // _STATE_MENU_HPP_
