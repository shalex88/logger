#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <iostream>

class Logger
{
	/* Singleton */
private:
	Logger();
public:
	Logger(Logger const&) = delete;
	Logger& operator=(Logger const&) = delete;
	static Logger& get();
	/* Singleton end */
	~Logger() = default;
	void log(std::string message);
};

#endif //LOGGER_LOGGER_H
