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

	static void add(std::unique_ptr<IState>);
	static std::list<std::unique_ptr<IState>> get();
private:
	static std::list<std::unique_ptr<IState>> state;
};

#endif // _STATEMANAGER_HPP_
