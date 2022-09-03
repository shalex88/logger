#include <iostream>
#include <syslog.h>
#include "LoggerTypeSyslog.h"

LoggerTypeSyslog::LoggerTypeSyslog() {
	std::cout << "Build LoggerTypeSyslog" << std::endl;
}

LoggerTypeSyslog::~LoggerTypeSyslog() {
	std::cout << "Destroy LoggerTypeSyslog" << std::endl;
}

void LoggerTypeSyslog::log(const E_LOG_SEVERITY& severity, const std::string& message) {
	syslog(static_cast<int>(severity), "%s", message.c_str());
}
