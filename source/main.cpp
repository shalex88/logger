#include "Logger/Logger.h"
#include "Logger/LoggerTypeStdio.h"
#include "Logger/LoggerTypeFile.h"
#include "Logger/LoggerTypeSyslog.h"

int main() {
	LoggerTypeStdio logger_type;
	auto& logger = Logger::get();
	logger.configure(&logger_type, E_LOG_SEVERITY::E_DEBUG);

	Logger::log_emerg("Emerg");
	Logger::log_alert("Alert");
	Logger::log_crit("Crit");
	Logger::log_err("Err");
	Logger::log_warning("Warning");
	Logger::log_notice("Notice");
	Logger::log_info("Info");
	Logger::log_debug("Debug");

    return 0;
}
