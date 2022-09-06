#ifndef LOGGER_SOURCE_LOGGER_LOGGER_TYPE_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_TYPE_H_

#include <string>

enum class ELogSeverity {
  kEmerg,
  kAlert,
  kCrit,
  kErr,
  kWarning,
  kNotice,
  kInfo,
  kDebug
};

class LoggerType {
 public:
  LoggerType();
  virtual ~LoggerType();
  virtual void Log(const ELogSeverity &severity, const std::string &message) = 0;
  static std::string SeverityToString(const ELogSeverity &severity);
  static std::string FormatMessage(const ELogSeverity &severity, const std::string &message);
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_TYPE_H_
