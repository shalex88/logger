#ifndef LOGGER_SOURCE_LOGGER_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_H_

#include "logger_type.h"
#include <iostream>

/* Singleton */
/* Proxy */
class Logger {
 private:
  Logger();
  ELogSeverity g_max_severity_;
  LoggerType *p_logger_type_;
  void Log(const ELogSeverity &severity, const std::string &message);
 public:
  Logger(Logger const &) = delete;
  Logger &operator=(Logger const &) = delete;
  static Logger &Get();
  ~Logger();
  void Configure(LoggerType *logger, const ELogSeverity &max_severity);
  static void LogEmerg(const std::string &message);
  static void LogAlert(const std::string &message);
  static void LogCrit(const std::string &message);
  static void LogErr(const std::string &message);
  static void LogWarning(const std::string &message);
  static void LogNotice(const std::string &message);
  static void LogInfo(const std::string &message);
  static void LogDebug(const std::string &message);
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_H_
