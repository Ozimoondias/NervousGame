#ifndef _STATE_HOST_HPP_
#define _STATE_HOST_HPP_

#include "IState.hpp"

class StateHost : public IState
{
public:

        explicit StateHost(StateManager&);
	virtual ~StateHost();

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

#endif // _STATE_HOST_HPP_
