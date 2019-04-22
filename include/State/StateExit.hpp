#ifndef _STATE_EXIT_HPP_
#define _STATE_EXIT_HPP_

#include "IState.hpp"

class StateExit : public IState
{
public:

        explicit StateExit(StateManager&);
	virtual ~StateExit();

	void event(sf::Event&);
	void update(sf::Time&);
	void draw(sf::RenderWindow&);

	EState::State get_EState();
	
};

#endif // _STATE_EXIT_HPP_
