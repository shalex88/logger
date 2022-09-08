#include "logger.h"
#include "stdio_logger.h"
#include "logger_type_stdio.h"

std::unique_ptr<LoggerType> StdioLogger::Get() {
  return std::make_unique<LoggerTypeStdio>();
}

StdioLogger::StdioLogger() {
  std::cout << "Build StdioLogger" << std::endl;
}

StdioLogger::~StdioLogger() {
  std::cout << "Destroy StdioLogger" << std::endl;
}
