#ifndef LOGGER_LOGGERTYPESTDIO_H
#define LOGGER_LOGGERTYPESTDIO_H

#include "LoggerType.h"

class LoggerTypeStdio : LoggerType
{
public:
	LoggerTypeStdio();
	~LoggerTypeStdio() override;
	void log() override;
};

#endif //LOGGER_LOGGERTYPESTDIO_H
