#ifndef _STATE_FIND_HPP_
#define _STATE_FIND_HPP_

#include "IState.hpp"

class StateFind : public IState
{
public:

        explicit StateFind(StateManager&);
	virtual ~StateFind();

	void init();
	void clean();

	void event(sf::Event&);
	void update(sf::Time&);
	void draw(sf::RenderWindow&);

	EState::State get_EState();
	
private:

	sf::Sprite	bgs;
	sf::Texture	bgt;

};

#endif // _STATE_FIND_HPP_
