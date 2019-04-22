#ifndef _STATE_PLAY_HPP_
#define _STATE_PLAY_HPP_

#include "IState.hpp"
#include "Button/ButtonManager.hpp"

class StatePlay : public IState
{
public:
        explicit StatePlay(StateManager&);
        virtual ~StatePlay();

	void init();
	void clean();

	void event(sf::Event&);
        void update(sf::Time&);
        void draw(sf::RenderWindow&);

	EState::State get_EState();

private:

	sf::Sprite	bgs;
	sf::Texture	bgt;
	ButtonManager	button_manager;
	
};

#endif // _STATE_PLAY_HPP_
