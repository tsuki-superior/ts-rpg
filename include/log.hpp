#ifndef __LOG_HPP__
#define __LOG_HPP__

#include <iostream>
#include <SDL2/SDL.h>

#define DEBUG true

namespace utils
{
	inline void Log(std::string message, bool is_error = false)
	{
		if (is_error)
		{
			if (DEBUG)
				std::cout << "[LOGGER] " << message << ", " << SDL_GetError() << std::endl;
		}
		else
		{
			if (DEBUG)
				std::cout << "[LOGGER] " << message << std::endl;
		}
	}
} // namespace utils

#endif
