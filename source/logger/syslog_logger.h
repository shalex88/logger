#ifndef LOGGER_SOURCE_LOGGER_SYSLOG_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_SYSLOG_LOGGER_H_

#include "logger_type.h"
#include "logger.h"

class SyslogLogger : public Logger {
 public:
  ~SyslogLogger() override = default;
  /* Factory method */
  std::unique_ptr<LoggerType> Create() override;
};

#endif //LOGGER_SOURCE_LOGGER_SYSLOG_LOGGER_H_
