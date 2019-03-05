#ifndef _STATE_PAUSE_HPP_
#define _STATE_PAUSE_HPP_

#include "IState.hpp"

class StatePause : public IState
{
public:
        explicit StatePause();
        virtual ~StatePause();

	void init();
	void clean();

	void event();
        void update();
        void draw();
};

#endif // _STATE_PAUSE_HPP_
