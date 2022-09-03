#include <iostream>
#include "Logger/Logger.h"

int main() {
	auto& logger = Logger::get();

	logger.log("Hello World");


    return 0;
}
