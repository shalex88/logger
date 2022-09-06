#include <iostream>
#include <iomanip>
#include "logger_type.h"

LoggerType::LoggerType() {
  std::cout << "Build LoggerType" << std::endl;
}

LoggerType::~LoggerType() {
  std::cout << "Destroy LoggerType" << std::endl;
}

std::string LoggerType::SeverityToString(const ELogSeverity &severity) {
  std::string severity_string{};

  switch (severity) {
    case ELogSeverity::kEmerg: severity_string = "EMERGENCY";
      break;
    case ELogSeverity::kAlert: severity_string = "ALERT";
      break;
    case ELogSeverity::kCrit: severity_string = "CRITICAL";
      break;
    case ELogSeverity::kErr: severity_string = "ERROR";
      break;
    case ELogSeverity::kWarning: severity_string = "WARNING";
      break;
    case ELogSeverity::kNotice: severity_string = "NOTICE";
      break;
    case ELogSeverity::kInfo: severity_string = "INFO";
      break;
    case ELogSeverity::kDebug: severity_string = "DEBUG";
      break;
  }

  return severity_string;
}

std::string LoggerType::FormatMessage(const ELogSeverity &severity, const std::string &message) {
  std::ostringstream ss;

  ss << "[" << SeverityToString(severity) << "] " << message;

  return ss.str();
}
