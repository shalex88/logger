#include <iomanip>
#include "Logger.h"

Logger& Logger::get() {
	static Logger logger;
	return logger;
}

void Logger::configure() {
	/* TODO: get LoggerType */
}

std::string Logger::format_message(const Logger::E_SEVERITY& severity, const std::string& message) {
	std::ostringstream ss;
	ss << "[" << severity << "] " << message;

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



