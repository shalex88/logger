#include <iostream>
#include "logger_type_file.h"

void LoggerTypeFile::Print(const ELogSeverity &severity, const std::string &message) {
  out_file_ << FormatMessage(severity, message) << std::endl;
}
