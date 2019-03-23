#include "../include/State/StateManager.hpp"
#include "../include/State/State.hpp"

StateManager::StateManager()
{
	std::cout << "Constructor StateManager" << std::endl;

	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Menu, std::make_shared<StateMenu>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Play, std::make_shared<StatePlay>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Pause, std::make_shared<StatePause>(*this)));

	c_state = m_state[EState::Menu];
}

StateManager::~StateManager()
{
	std::cout << "Destructor StateManager" << std::endl;
}

void StateManager::change_c_state(EState::State e_state)
{
	c_state = m_state[e_state];
	/*switch (e_state)
	{
	case Menu:
		c_state = m_state[EState::State::Menu];
		break;
	case Play:
		c_state = m_state[EState::State::Play];
		break;
	case Pause:
		c_state = m_state[EState::State::Pause];
		break;
		}*/
}

std::shared_ptr<IState> StateManager::get_c_state()
{
	return c_state;
}

std::map<EState::State, std::shared_ptr<IState>> StateManager::get_m_state()
{
	return m_state;
}
