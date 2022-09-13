#include "logger/stdio_logger.h"
#include "logger/file_logger.h"
#include "logger/syslog_logger.h"

int main() {
  StdioLogger logger;
  logger.Configure(ELogSeverity::kDebug);

  logger.LogEmerg("Emerg");
  logger.LogAlert("Alert");
  logger.LogCrit("Crit");
  logger.LogErr("Err");
  logger.LogWarning("Warning");
  logger.LogNotice("Notice");
  logger.LogInfo("Info");
  logger.LogDebug("Debug");

  return 0;
}
