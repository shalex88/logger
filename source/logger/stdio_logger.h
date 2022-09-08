#ifndef LOGGER_SOURCE_LOGGER_STDIO_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_STDIO_LOGGER_H_

#include "logger_type.h"
#include <iostream>
#include <memory>
#include "logger.h"

class StdioLogger : Logger {
 public:
  StdioLogger();
  ~StdioLogger() override;
  std::unique_ptr<LoggerType> Get() override;
};

#endif //LOGGER_SOURCE_LOGGER_STDIO_LOGGER_H_
