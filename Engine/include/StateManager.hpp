#ifndef _STATE_MANAGER_HPP_
#define _STATE_MANAGER_HPP_

#include <iostream>
#include <list>
#include <memory>

class State
{
public:
	virtual void update() = 0;
	virtual void render() = 0;
};

class StatePlay : public State
{
public:
	StatePlay(){};
	
	void update() {
		std::cout << "StatePlay update" << std::endl;
	}
	void render() {
		std::cout << "StatePlay render" << std::endl;
	}
};

class StateMenu : public State
{
public:
	StateMenu(){};
		
	void update() {
		std::cout << "StateMenu update" << std::endl;
	}
	void render() {
		std::cout << "StateMenu render" << std::endl;
	}
};

class StateManager
{
public:
	static void add(std::unique_ptr<State> o) {
		state.push_back(std::move(o));
	}
	static std::list<std::unique_ptr<State>> get() {
		return std::move(state);
	}

private:
	static std::list<std::unique_ptr<State>> state;
};

std::list<std::unique_ptr<State>> StateManager::state =
			     std::list<std::unique_ptr<State>>();

#endif // _STATE_MANAGER_HPP_
