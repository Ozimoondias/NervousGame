#ifndef	_ENGINE_RENDER_HPP_
#define	_ENGINE_RENDER_HPP_

#include <iostream>
#include <SFML/Graphics.hpp>

class	EngineRender
{
public:
	explicit EngineRender(std::string, int w_width = 1920, int w_height = 1080);
	virtual ~EngineRender();
private:
	sf::RenderWindow window;
};

#endif	// _ENGINE_RENDER_HPP_
