#include <syslog.h>
#include "logger_type_syslog.h"

void LoggerTypeSyslog::Print(const ELogSeverity &severity, const std::string &message) {
  syslog(static_cast<int>(severity), "%s", message.c_str());
}
