#ifndef _STATE_MULTI_HPP_
#define _STATE_MULTI_HPP_

#include "IState.hpp"
#include "Button/ButtonManager.hpp"

class StateMulti : public IState
{
public:
        explicit StateMulti(StateManager&);
        virtual ~StateMulti();

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

#endif // _STATE_MULTI_HPP_
