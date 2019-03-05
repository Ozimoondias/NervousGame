#include "../include/State/StateManager.hpp"

StateManager::StateManager()
{
	std::cout << "C StateManager" << std::endl;
}

StateManager::~StateManager()
{
	std::cout << "D StateManager" << std::endl;
}

void StateManager::add_state(std::shared_ptr<IState> new_state)
{
	states.push_back(new_state);
}

void StateManager::pop_state()
{
	
}

std::shared_ptr<IState> StateManager::get_current()
{
	return states.back();
}
