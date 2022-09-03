#ifndef LOGGER_LOGGERTYPE_H
#define LOGGER_LOGGERTYPE_H

#include <string>

enum class E_LOG_SEVERITY {
	E_EMERG,
	E_ALERT,
	E_CRIT,
	E_ERR,
	E_WARNING,
	E_NOTICE,
	E_INFO,
	E_DEBUG
};

class LoggerType
{
public:
	LoggerType();
	virtual ~LoggerType();
	virtual void log(const E_LOG_SEVERITY& severity, const std::string& message) = 0;
	static std::string severity_to_string(const E_LOG_SEVERITY& severity);
	static std::string format_message(const E_LOG_SEVERITY& severity, const std::string& message);
};

#endif //LOGGER_LOGGERTYPE_H
