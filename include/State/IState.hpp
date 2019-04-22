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
	virtual void update(sf::Time&) = 0;
	virtual void draw(sf::RenderWindow&) = 0;

	virtual EState::State get_EState() = 0;
	
protected:
	void change_c_state(EState::State);

private:
	StateManager *state_manager;
};

#endif	// _ISTATE_HPP_
