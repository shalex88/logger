#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include "LoggerTypeStdio.h"
#include "LoggerTypeFile.h"
#include <iostream>

/* Singleton */
/* Factory Method */
class Logger
{
public:
	Logger(Logger const&) = delete;
	Logger& operator=(Logger const&) = delete;
	static Logger& get();
	~Logger();
	enum E_SEVERITY {
		E_EMERG,
		E_ALERT,
		E_CRIT,
		E_ERR,
		E_WARNING,
		E_NOTICE,
		E_INFO,
		E_DEBUG
	};
	void configure(const E_SEVERITY& max_severity);
	static void log_emerg(const std::string& message);
	static void log_alert(const std::string& message);
	static void log_crit(const std::string& message);
	static void log_err(const std::string& message);
	static void log_warning(const std::string& message);
	static void log_notice(const std::string& message);
	static void log_info(const std::string& message);
	static void log_debug(const std::string& message);
private:
	Logger();
	E_SEVERITY g_max_severity;
	LoggerTypeStdio my_logger;
	void log(const E_SEVERITY& severity, const std::string& message);
	static std::string format_message(const E_SEVERITY& severity, const std::string& message);
	static std::string severity_to_string(const E_SEVERITY& severity);
};

#endif //LOGGER_LOGGER_H
