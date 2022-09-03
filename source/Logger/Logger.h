#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include "LoggerType.h"
#include <iostream>

/* Singleton */
/* Proxy */
class Logger
{
private:
	Logger();
	E_LOG_SEVERITY g_max_severity;
	LoggerType* loggerType;
	void log(const E_LOG_SEVERITY& severity, const std::string& message);
public:
	Logger(Logger const&) = delete;
	Logger& operator=(Logger const&) = delete;
	static Logger& get();
	~Logger();
	void configure(LoggerType* logger, const E_LOG_SEVERITY& max_severity);
	static void log_emerg(const std::string& message);
	static void log_alert(const std::string& message);
	static void log_crit(const std::string& message);
	static void log_err(const std::string& message);
	static void log_warning(const std::string& message);
	static void log_notice(const std::string& message);
	static void log_info(const std::string& message);
	static void log_debug(const std::string& message);
};

#endif //LOGGER_LOGGER_H
