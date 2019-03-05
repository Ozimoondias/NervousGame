#include "../include/State/IState.hpp"

IState::IState()
{
	std::cout << "Conctructor IState" << std::endl;
}

IState::~IState()
{
	std::cout << "Desctructor IState" << std::endl;
}

void IState::change(std::unique_ptr<StateManager> game, std::unique_ptr<IState> new_state)
{
	
}
