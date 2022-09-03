#include "Logger.h"

Logger& Logger::get() {
	static Logger my_logger;

	return my_logger;
}

void Logger::configure(LoggerType* logger, const E_LOG_SEVERITY& max_severity) {
	if (logger) {
		loggerType = logger;
	}
	g_max_severity = max_severity;
}

void Logger::log(const E_LOG_SEVERITY& severity, const std::string& message) {
	if (severity <= g_max_severity) {
		if (loggerType) {
			loggerType->log(severity, message);
		}
	}
}

void Logger::log_emerg(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_EMERG, message);
}

void Logger::log_alert(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_ALERT, message);
}

void Logger::log_crit(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_CRIT, message);
}

void Logger::log_err(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_ERR, message);
}

void Logger::log_warning(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_WARNING, message);
}

void Logger::log_notice(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_NOTICE, message);
}

void Logger::log_info(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_INFO, message);
}

void Logger::log_debug(const std::string& message) {
	Logger::get().log(E_LOG_SEVERITY::E_DEBUG, message);
}

Logger::Logger() {
	std::cout << "Build Logger" << std::endl;
}

Logger::~Logger() {
	std::cout << "Destroy Logger" << std::endl;
}
