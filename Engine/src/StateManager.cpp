#include "../include/State/StateManager.hpp"

std::list<std::unique_ptr<IState>> StateManager::state =
        std::list<std::unique_ptr<IState>>();

StateManager::StateManager()
{
	std::cout << "C StateManager" << std::endl;
}

StateManager::~StateManager()
{
	std::cout << "D StateManager" << std::endl;
}

void StateManager::add(std::unique_ptr<IState> new_state)
{
	state.push_back(std::move(new_state));
}

std::list<std::unique_ptr<IState>> StateManager::get()
{
	return std::move(state);
}
