#include <squanch/logger.h>

namespace squanch{
    
    std::shared_ptr<spdlog::logger> squanch_logger::engine_logger;
    std::shared_ptr<spdlog::logger> squanch_logger::app_logger;

    void squanch_logger::init(){
        spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
        squanch_logger::engine_logger = spdlog::stdout_color_mt("NUTSACK");

        squanch_logger::app_logger = spdlog::stdout_color_mt("APP");
    }
}

