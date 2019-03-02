#ifndef	_GAME_HPP_
#define	_GAME_HPP_

#include <iostream>
#include <list>

class	Game
{
public:
	explicit Game();
	virtual ~Game();

	void	attach(int);
private:
	std::list<int>	l_int;
};

#endif	// _GAME_HPP_
