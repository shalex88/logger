#include "logger.h"

Logger::Logger() : max_severity_{ELogSeverity::kNotice} {
}

void Logger::Configure(const ELogSeverity &max_severity) {
  max_severity_ = max_severity;
}

void Logger::Log(const ELogSeverity &severity, const std::string &message) {
  static auto p_logger = this->Create();
  if (severity <= max_severity_) {
    if (p_logger) {
      p_logger->Print(severity, message);
    }
  }
}

void Logger::LogEmerg(const std::string &message) {
  Log(ELogSeverity::kEmerg, message);
}

void Logger::LogAlert(const std::string &message) {
  Log(ELogSeverity::kAlert, message);
}

void Logger::LogCrit(const std::string &message) {
  Log(ELogSeverity::kCrit, message);
}

void Logger::LogErr(const std::string &message) {
  Log(ELogSeverity::kErr, message);
}

void Logger::LogWarning(const std::string &message) {
  Log(ELogSeverity::kWarning, message);
}

void Logger::LogNotice(const std::string &message) {
  Log(ELogSeverity::kNotice, message);
}

void Logger::LogInfo(const std::string &message) {
  Log(ELogSeverity::kInfo, message);
}

void Logger::LogDebug(const std::string &message) {
  Log(ELogSeverity::kDebug, message);
}
