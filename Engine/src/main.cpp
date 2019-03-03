#include "../include/Game.hpp"
#include "../include/StateManager.hpp"

int	main()
{
	/*Game test("BITE", 500, 500);

	  test.run();*/


	StateManager::add(std::make_unique<StateMenu>());
	
	for (const auto &val : StateManager::get())
		val->update();

	return (0);
}
