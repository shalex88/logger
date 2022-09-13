#ifndef LOGGER_SOURCE_LOGGER_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_H_

#include "logger_type.h"
#include <iostream>
#include <memory>

/* Factory method */
class Logger {
 private:
  ELogSeverity max_severity_;
 public:
  Logger();
  virtual ~Logger() = default;
  /* Factory method */
  virtual std::unique_ptr<LoggerType> Create() = 0;
  void Log(const ELogSeverity &severity, const std::string &message);
  void LogEmerg(const std::string &message);
  void LogAlert(const std::string &message);
  void LogCrit(const std::string &message);
  void LogErr(const std::string &message);
  void LogWarning(const std::string &message);
  void LogNotice(const std::string &message);
  void LogInfo(const std::string &message);
  void LogDebug(const std::string &message);
  void Configure(const ELogSeverity &max_severity);
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_H_
