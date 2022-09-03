#include <iomanip>
#include "Logger.h"

Logger& Logger::get() {
	static Logger logger;
	return logger;
}

void Logger::configure() {
	/* TODO: get LoggerType */
}

/* TODO: move to LoggerType */
std::string Logger::severity_to_string(const Logger::E_SEVERITY& severity) {
	std::string severity_string{};

	switch (severity) {
		case E_EMERG:
			severity_string = "EMERGENCY";
			break;
		case E_ALERT:
			severity_string = "ALERT";
			break;
		case E_CRIT:
			severity_string = "CRITICAL";
			break;
		case E_ERR:
			severity_string = "ERROR";
			break;
		case E_WARNING:
			severity_string = "WARNING";
			break;
		case E_NOTICE:
			severity_string = "NOTICE";
			break;
		case E_INFO:
			severity_string = "INFO";
			break;
		case E_DEBUG:
			severity_string = "DEBUG";
			break;
	}

	return severity_string;
}

/* TODO: move to LoggerType */
std::string Logger::format_message(const Logger::E_SEVERITY& severity, const std::string& message) {
	std::ostringstream ss;

	ss << "[" << severity_to_string(severity) << "] " << message;

	return ss.str();
}

void Logger::log(const Logger::E_SEVERITY& severity, const std::string& message) {
	/* TODO: LoggerType.log() */
	std::cout << format_message(severity, message) << std::endl;
}

void Logger::log_debug(const std::string& message) {
	log(E_DEBUG, message);
}

void Logger::log_notice(const std::string& message) {
	log(E_NOTICE, message);
}



