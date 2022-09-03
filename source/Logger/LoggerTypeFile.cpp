#include <iostream>
#include "LoggerTypeFile.h"

LoggerTypeFile::LoggerTypeFile() {
	std::cout << "Build LoggerTypeFile" << std::endl;
}

LoggerTypeFile::~LoggerTypeFile() {
	std::cout << "Destroy LoggerTypeFile" << std::endl;
}

void LoggerTypeFile::log() {
	std::cout << "LoggerTypeFile" << std::endl;
}
