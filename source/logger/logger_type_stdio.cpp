#include <iostream>
#include "logger_type_stdio.h"

void LoggerTypeStdio::Print(const ELogSeverity &severity, const std::string &message) {
  std::cout << FormatMessage(severity, message) << std::endl;
}
