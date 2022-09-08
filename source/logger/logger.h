#ifndef LOGGER_SOURCE_LOGGER_LOGGER_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_H_

#include "logger_type.h"
#include <iostream>
#include <memory>

class Logger {
 public:
  Logger();
  virtual ~Logger();
  virtual std::unique_ptr<LoggerType> Get() = 0;
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_H_
