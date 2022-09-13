#include "file_logger.h"
#include "logger_type_file.h"

std::unique_ptr<LoggerType> FileLogger::Create() {
  return std::make_unique<LoggerTypeFile>();
}


