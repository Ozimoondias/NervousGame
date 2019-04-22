#ifndef _STATE_SOLO_HPP_
#define _STATE_SOLO_HPP_

#include "IState.hpp"

class StateSolo : public IState
{
public:
        explicit StateSolo(StateManager&);
        virtual ~StateSolo();

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

#endif // _STATE_SOLO_HPP_
