#include <iostream>
#include <syslog.h>
#include "logger_type_syslog.h"

LoggerTypeSyslog::LoggerTypeSyslog() {
  std::cout << "Build LoggerTypeSyslog" << std::endl;
}

void LoggerTypeSyslog::Log(const ELogSeverity &severity, const std::string &message) {
  syslog(static_cast<int>(severity), "%s", message.c_str());
}
