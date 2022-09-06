#include "logger.h"

Logger &Logger::Get() {
  static Logger my_logger;

  return my_logger;
}

void Logger::Configure(LoggerType *logger, const ELogSeverity &max_severity) {
  if (logger) {
    p_logger_type_ = logger;
  }
  g_max_severity_ = max_severity;
}

void Logger::Log(const ELogSeverity &severity, const std::string &message) {
  if (severity <= g_max_severity_) {
    if (p_logger_type_) {
      p_logger_type_->Log(severity, message);
    }
  }
}

void Logger::LogEmerg(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kEmerg, message);
}

void Logger::LogAlert(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kAlert, message);
}

void Logger::LogCrit(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kCrit, message);
}

void Logger::LogErr(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kErr, message);
}

void Logger::LogWarning(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kWarning, message);
}

void Logger::LogNotice(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kNotice, message);
}

void Logger::LogInfo(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kInfo, message);
}

void Logger::LogDebug(const std::string &message) {
  Logger::Get().Log(ELogSeverity::kDebug, message);
}

Logger::Logger() : g_max_severity_{ELogSeverity::kNotice}, p_logger_type_{} {
  std::cout << "Build logger" << std::endl;
}

Logger::~Logger() {
  std::cout << "Destroy logger" << std::endl;
}
