#include "logger/logger.h"
#include "logger/logger_type_stdio.h"
#include "logger/logger_type_file.h"
#include "logger/logger_type_syslog.h"

int main() {
  LoggerTypeStdio logger_type;
  auto &logger = Logger::Get();
  logger.Configure(&logger_type, ELogSeverity::kDebug);

  Logger::LogEmerg("Emerg");
  Logger::LogAlert("Alert");
  Logger::LogCrit("Crit");
  Logger::LogErr("Err");
  Logger::LogWarning("Warning");
  Logger::LogNotice("Notice");
  Logger::LogInfo("Info");
  Logger::LogDebug("Debug");

  return 0;
}
