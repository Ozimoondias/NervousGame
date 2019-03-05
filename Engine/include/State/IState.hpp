#ifndef _ISTATE_HPP_
#define _ISTATE_HPP_

#include <iostream>
#include <memory>

class StateManager;

class IState
{
public:
	IState();
	virtual ~IState();

	virtual void init() = 0;
	virtual void clean() = 0;

	virtual void event() = 0;
	virtual void update() = 0;
	virtual void draw() = 0;

	void change(std::unique_ptr<StateManager>, std::unique_ptr<IState>);
};

#endif	// _ISTATE_HPP_
