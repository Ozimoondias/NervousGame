#ifndef _ISTATE_HPP_
#define _ISTATE_HPP_

#include <iostream>
#include <memory>

#include <SFML/Graphics.hpp>

#include "EState.hpp"

class StateManager;

class IState
{
public:

	IState(StateManager&);
	virtual ~IState();

	virtual void event(sf::Event&) = 0;
	virtual void update() = 0;
	virtual void draw() = 0;

protected:
	void change_c_state(EState::State);

private:
	StateManager *state_manager;
};

#endif	// _ISTATE_HPP_
