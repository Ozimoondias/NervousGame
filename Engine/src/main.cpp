#include "../include/Game.hpp"
#include "../include/State/StateManager.hpp"

int	main()
{

	StateManager::add(std::make_unique<StateMenu>());
	StateManager::add(std::make_unique<StatePause>());
	
	for (const std::unique_ptr<IState>& val : StateManager::get())
	{
		val->update();
		val->render();
	}

	return (0);
}
