#ifndef LOGGER_SOURCE_LOGGER_LOGGER_TYPE_SYSLOG_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_TYPE_SYSLOG_H_

#include "logger_type.h"

class LoggerTypeSyslog : public LoggerType {
 public:
  LoggerTypeSyslog();
  ~LoggerTypeSyslog() override;
  void Log(const ELogSeverity &severity, const std::string &message) override;
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_TYPE_SYSLOG_H_
