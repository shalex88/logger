#ifndef LOGGER_SOURCE_LOGGER_STDIO_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_STDIO_LOGGER_H_

#include "logger_type.h"
#include "logger.h"

class StdioLogger : public Logger {
 public:
  ~StdioLogger() override = default;
  /* Factory method */
  std::unique_ptr<LoggerType> Create() override;
};

#endif //LOGGER_SOURCE_LOGGER_STDIO_LOGGER_H_
