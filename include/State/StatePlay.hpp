#ifndef _STATE_PLAY_HPP_
#define _STATE_PLAY_HPP_

#include "IState.hpp"

class StatePlay : public IState
{
public:
        explicit StatePlay(StateManager&);
        virtual ~StatePlay();

	void init();
	void clean();

	void event(sf::Event&);
        void update();
        void draw(sf::RenderWindow&);

private:

	sf::Sprite	bgs;
	sf::Texture	bgt;

};

#endif // _STATE_PLAY_HPP_
