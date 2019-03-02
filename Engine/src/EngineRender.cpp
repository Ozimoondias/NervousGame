#include "../include/EngineRender.hpp"

EngineRender::EngineRender(std::string w_name, int w_width, int w_height)
{
	std::cout << "C EngineRender" << std::endl;

	this->window.create(sf::VideoMode(w_width, w_height), w_name);
}

EngineRender::~EngineRender()
{
	std::cout << "D EngineRender" << std::endl;
}