#ifndef LOGGER_SOURCE_LOGGER_FILE_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_FILE_LOGGER_H_

#include "logger_type.h"
#include "logger.h"

class FileLogger : public Logger {
 public:
  ~FileLogger() override = default;
  /* Factory method */
  std::unique_ptr<LoggerType> Create() override;
};

#endif //LOGGER_SOURCE_LOGGER_FILE_LOGGER_H_
