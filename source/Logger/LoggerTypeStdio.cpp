#include <iostream>
#include "LoggerTypeStdio.h"

LoggerTypeStdio::LoggerTypeStdio() {
	std::cout << "Build LoggerTypeStdio" << std::endl;
}

LoggerTypeStdio::~LoggerTypeStdio() {
	std::cout << "Destroy LoggerTypeStdio" << std::endl;
}

void LoggerTypeStdio::log(const E_LOG_SEVERITY& severity, const std::string& message) {
	std::cout << format_message(severity, message) << std::endl;
}
