#include <iostream>
#include "logger_type_file.h"

LoggerTypeFile::LoggerTypeFile() {
  std::cout << "Build LoggerTypeFile" << std::endl;
}

LoggerTypeFile::~LoggerTypeFile() {
  std::cout << "Destroy LoggerTypeFile" << std::endl;
}

void LoggerTypeFile::Log(const ELogSeverity &severity, const std::string &message) {
  out_file_ << FormatMessage(severity, message) << std::endl;
}
