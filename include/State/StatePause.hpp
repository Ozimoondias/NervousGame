#ifndef _STATE_PAUSE_HPP_
#define _STATE_PAUSE_HPP_

#include "IState.hpp"

class StatePause : public IState
{
public:
        explicit StatePause(StateManager&);
        virtual ~StatePause();

	void init();
	void clean();

	void event(sf::Event&);
        void update();
        void draw(sf::RenderWindow&);

private:

	sf::Sprite	bgs;
	sf::Texture	bgt;

};

#endif // _STATE_PAUSE_HPP_
