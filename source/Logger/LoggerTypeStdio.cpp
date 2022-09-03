#include <iostream>
#include "LoggerTypeStdio.h"

LoggerTypeStdio::LoggerTypeStdio() {
	std::cout << "Build LoggerTypeStdio" << std::endl;
}

LoggerTypeStdio::~LoggerTypeStdio() {
	std::cout << "Destroy LoggerTypeStdio" << std::endl;
}

void LoggerTypeStdio::log() {
	std::cout << "LoggerTypeStdio" << std::endl;
}
