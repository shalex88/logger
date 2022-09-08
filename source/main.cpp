#include "logger/stdio_logger.h"

int main() {
  auto factory_logger = std::make_unique<StdioLogger>();
  auto logger = factory_logger->Get();

  logger->LogEmerg("Emerg");
  logger->LogAlert("Alert");
  logger->LogCrit("Crit");
  logger->LogErr("Err");
  logger->LogWarning("Warning");
  logger->LogNotice("Notice");
  logger->LogInfo("Info");
  logger->LogDebug("Debug");

  return 0;
}
