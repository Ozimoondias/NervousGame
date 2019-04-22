#include "../include/State/StateManager.hpp"

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
		(EState::State::Option, std::make_shared<StateOption>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Exit, std::make_shared<StateExit>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Solo, std::make_shared<StateSolo>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Multi, std::make_shared<StateMulti>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Host, std::make_shared<StateHost>(*this)));
	m_state.insert(
		std::pair<EState::State, std::shared_ptr<IState>>
		(EState::State::Find, std::make_shared<StateFind>(*this)));
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
}

std::shared_ptr<IState> StateManager::get_c_state()
{
	return c_state;
}

std::map<EState::State, std::shared_ptr<IState>> StateManager::get_m_state()
{
	return m_state;
}
