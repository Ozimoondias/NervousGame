#ifndef _STATE_MENU_HPP_
#define _STATE_MENU_HPP_

#include "IState.hpp"

class StateMenu : public IState
{
public:
        explicit StateMenu();
	virtual ~StateMenu();

	void update();
	void render();
};

#endif // _STATE_MENU_HPP_
