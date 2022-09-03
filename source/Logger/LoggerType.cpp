#include <iostream>
#include "LoggerType.h"

LoggerType::LoggerType() {
	std::cout << "Build LoggerType" << std::endl;
}

LoggerType::~LoggerType() {
	std::cout << "Destroy LoggerType" << std::endl;
}

void LoggerType::log() {
	std::cout << "LoggerType" << std::endl;
}
