#include "syslog_logger.h"
#include "logger_type_syslog.h"

std::unique_ptr<LoggerType> SyslogLogger::Create() {
  return std::make_unique<LoggerTypeSyslog>();
}


