#include "../include/State/IState.hpp"
#include "../include/State/StateManager.hpp"

IState::IState(StateManager &sm)
	: state_manager(&sm)
{
	std::cout << "Conctructor IState" << std::endl;
}

IState::~IState()
{
	std::cout << "Desctructor IState" << std::endl;
}

void IState::change_c_state(EState::State es)
{
	state_manager->change_c_state(es);
}
