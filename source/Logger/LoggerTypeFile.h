#ifndef LOGGER_LOGGERTYPEFILE_H
#define LOGGER_LOGGERTYPEFILE_H

#include <fstream>
#include "LoggerType.h"

class LoggerTypeFile : public LoggerType
{
public:
	LoggerTypeFile() ;
	~LoggerTypeFile() override;
	void log(const E_LOG_SEVERITY& severity, const std::string& message) override;
private:
	std::ofstream out_file {"./log.txt", std::ios::trunc};
};

#endif //LOGGER_LOGGERTYPEFILE_H
