#include "Logger.h"

Logger::Logger() {
	std::cout << "Build logger" << std::endl;
}

Logger& Logger::get() {
	static Logger logger;
	return logger;
}

void Logger::log(std::string message) {
	std::cout << message << std::endl;
}
