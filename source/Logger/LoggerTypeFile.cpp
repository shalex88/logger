#include <iostream>
#include "LoggerTypeFile.h"

LoggerTypeFile::LoggerTypeFile() {
	std::cout << "Build LoggerTypeFile" << std::endl;
}

LoggerTypeFile::~LoggerTypeFile() {
	std::cout << "Destroy LoggerTypeFile" << std::endl;
}

void LoggerTypeFile::log(const E_LOG_SEVERITY& severity, const std::string& message) {
	out_file << format_message(severity, message) << std::endl;
}
