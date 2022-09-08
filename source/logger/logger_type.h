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
  virtual void Log(const ELogSeverity &severity, const std::string &message) = 0;
  static std::string SeverityToString(const ELogSeverity &severity);
  static std::string FormatMessage(const ELogSeverity &severity, const std::string &message);
  virtual ~LoggerType() = default;
  void LogEmerg(const std::string &message);
  void LogAlert(const std::string &message);
  void LogCrit(const std::string &message);
  void LogErr(const std::string &message);
  void LogWarning(const std::string &message);
  void LogNotice(const std::string &message);
  void LogInfo(const std::string &message);
  void LogDebug(const std::string &message);
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_TYPE_H_
