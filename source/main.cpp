#include "Logger/Logger.h"

int main() {
	auto& logger = Logger::get();
	logger.configure();

	Logger::log_debug("Hello World");
	Logger::log_notice("Hello World");

    return 0;
}
