#include <iostream>
#include <iomanip>
#include "LoggerType.h"

LoggerType::LoggerType() {
	std::cout << "Build LoggerType" << std::endl;
}

LoggerType::~LoggerType() {
	std::cout << "Destroy LoggerType" << std::endl;
}

std::string LoggerType::severity_to_string(const E_LOG_SEVERITY& severity) {
	std::string severity_string{};

	switch (severity) {
		case E_LOG_SEVERITY::E_EMERG:
			severity_string = "EMERGENCY";
			break;
		case E_LOG_SEVERITY::E_ALERT:
			severity_string = "ALERT";
			break;
		case E_LOG_SEVERITY::E_CRIT:
			severity_string = "CRITICAL";
			break;
		case E_LOG_SEVERITY::E_ERR:
			severity_string = "ERROR";
			break;
		case E_LOG_SEVERITY::E_WARNING:
			severity_string = "WARNING";
			break;
		case E_LOG_SEVERITY::E_NOTICE:
			severity_string = "NOTICE";
			break;
		case E_LOG_SEVERITY::E_INFO:
			severity_string = "INFO";
			break;
		case E_LOG_SEVERITY::E_DEBUG:
			severity_string = "DEBUG";
			break;
	}

	return severity_string;
}

std::string LoggerType::format_message(const E_LOG_SEVERITY& severity, const std::string& message) {
	std::ostringstream ss;

	ss << "[" << severity_to_string(severity) << "] " << message;

	return ss.str();
}
