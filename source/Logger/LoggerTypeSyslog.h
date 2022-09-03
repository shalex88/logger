#ifndef LOGGER_LOGGERTYPESYSLOG_H
#define LOGGER_LOGGERTYPESYSLOG_H

#include "LoggerType.h"

class LoggerTypeSyslog : public LoggerType
{
public:
	LoggerTypeSyslog() ;
	~LoggerTypeSyslog() override;
	void log(const E_LOG_SEVERITY& severity, const std::string& message) override;
};

#endif //LOGGER_LOGGERTYPESYSLOG_H
