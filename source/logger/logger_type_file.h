#ifndef LOGGER_SOURCE_LOGGER_LOGGER_TYPE_FILE_H_
#define LOGGER_SOURCE_LOGGER_LOGGER_TYPE_FILE_H_

#include <fstream>
#include "logger_type.h"

class LoggerTypeFile : public LoggerType {
 public:
  ~LoggerTypeFile() override = default;
  void Print(const ELogSeverity &severity, const std::string &message) override;
 private:
  std::ofstream out_file_{"./log.txt", std::ios::trunc};
};

#endif //LOGGER_SOURCE_LOGGER_LOGGER_TYPE_FILE_H_
