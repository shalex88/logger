#ifndef LOGGER_LOGGER_H
#define LOGGER_LOGGER_H

#include <iostream>

/* Singleton */
class Logger
{
private:
	Logger() = default;
	enum E_SEVERITY {
		E_DEBUG,
		E_NOTICE
	};
	static void log(const E_SEVERITY& severity, const std::string& message);
	static std::string format_message(const E_SEVERITY& severity, const std::string& message);
public:
	Logger(Logger const&) = delete;
	Logger& operator=(Logger const&) = delete;
	static Logger& get();
	~Logger() = default;
	void configure();

	static void log_debug(const std::string& message);
	static void log_notice(const std::string& message);


};

#endif //LOGGER_LOGGER_H
