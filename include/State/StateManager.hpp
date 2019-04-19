#ifndef _STATEMANAGER_HPP_
#define _STATEMANAGER_HPP_

#include <map>
#include <memory>
#include <iostream>

#include "IState.hpp"
#include "LState.hpp"

class StateManager
{
public:

	explicit StateManager();
	virtual ~StateManager();

	void change_c_state(EState::State);

	std::shared_ptr<IState> get_c_state();
	std::map<EState::State, std::shared_ptr<IState>> get_m_state();

private:

	std::shared_ptr<IState> c_state;
	std::map<EState::State, std::shared_ptr<IState>> m_state;

};

#endif // _STATEMANAGER_HPP_
