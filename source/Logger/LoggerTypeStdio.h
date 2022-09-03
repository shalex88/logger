#ifndef LOGGER_LOGGERTYPESTDIO_H
#define LOGGER_LOGGERTYPESTDIO_H

#include "LoggerType.h"

class LoggerTypeStdio : public LoggerType
{
public:
	LoggerTypeStdio();
	~LoggerTypeStdio() override;
	void log(const E_LOG_SEVERITY& severity, const std::string& message) override;
};

#endif //LOGGER_LOGGERTYPESTDIO_H
