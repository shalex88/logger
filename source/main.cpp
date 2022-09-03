#include "Logger/Logger.h"

int main() {
	auto& logger = Logger::get();
	logger.configure(Logger::E_DEBUG);

	Logger::log_emerg("Hello World");
	Logger::log_alert("Hello World");
	Logger::log_crit("Hello World");
	Logger::log_err("Hello World");
	Logger::log_warning("Hello World");
	Logger::log_notice("Hello World");
	Logger::log_info("Hello World");
	Logger::log_debug("Hello World");

    return 0;
}
