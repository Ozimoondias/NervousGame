#include	"../include/Game.hpp"

Game::Game()
{
	std::cout << "C Game" << std::endl;
}

Game::~Game()
{
	std::cout << "D Game" << std::endl;
}

void	Game::attach(int i)
{
	this->l_int.push_front(i);
	std::cout << "attach " << i << std::endl;
}
