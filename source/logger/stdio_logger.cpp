#include "stdio_logger.h"
#include "logger_type_stdio.h"

std::unique_ptr<LoggerType> StdioLogger::Create() {
  return std::make_unique<LoggerTypeStdio>();
}


