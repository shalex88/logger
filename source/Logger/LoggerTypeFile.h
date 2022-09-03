#ifndef LOGGER_LOGGERTYPEFILE_H
#define LOGGER_LOGGERTYPEFILE_H

#include "LoggerType.h"

class LoggerTypeFile : LoggerType
{
public:
	LoggerTypeFile();
	~LoggerTypeFile() override;
	void log() override;
};

#endif //LOGGER_LOGGERTYPEFILE_H
