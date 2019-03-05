#ifndef _STATEMANAGER_HPP_
#define _STATEMANAGER_HPP_

#include <list>
#include <memory>
#include <iostream>

#include "IState.hpp"
#include "StateMenu.hpp"
#include "StatePause.hpp"

class StateManager
{
public:

	explicit StateManager();
	virtual ~StateManager();

	void add_state(std::shared_ptr<IState>);
	void pop_state();

	std::shared_ptr<IState> get_current();

private:

	std::list<std::shared_ptr<IState>> states;

};

#endif // _STATEMANAGER_HPP_
