#include <iostream>
#include "logger_type_stdio.h"

LoggerTypeStdio::LoggerTypeStdio() {
  std::cout << "Build LoggerTypeStdio" << std::endl;
}

LoggerTypeStdio::~LoggerTypeStdio() {
  std::cout << "Destroy LoggerTypeStdio" << std::endl;
}

void LoggerTypeStdio::Log(const ELogSeverity &severity, const std::string &message) {
  std::cout << FormatMessage(severity, message) << std::endl;
}
