#ifndef _ISTATE_HPP_
#define _ISTATE_HPP_

// for debug
#include <iostream>

class	IState
{
public:
	virtual ~IState(){}

	virtual void update() = 0;
	virtual void render() = 0;
};

#endif	// _ISTATE_HPP_
