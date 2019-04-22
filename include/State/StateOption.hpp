#ifndef _STATE_OPTION_HPP_
#define _STATE_OPTION_HPP_

#include "IState.hpp"

class StateOption : public IState
{
public:
        explicit StateOption(StateManager&);
        virtual ~StateOption();

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

#endif // _STATE_OPTION_HPP_
