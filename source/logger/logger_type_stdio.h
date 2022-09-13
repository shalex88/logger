#ifndef LOGGER_SOURCE_LOGGER_LOGGER_TYPE_STDIO_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_TYPE_STDIO_H_

#include "logger_type.h"

class LoggerTypeStdio : public LoggerType {
 public:
  ~LoggerTypeStdio() override = default;
  void Print(const ELogSeverity &severity, const std::string &message) override;
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_TYPE_STDIO_H_
