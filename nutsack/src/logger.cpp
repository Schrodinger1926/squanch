#include <nutsack/logger.h>


namespace nutsack{
    
    std::shared_ptr<spdlog::logger> nutsack_logger::engine_logger;
    std::shared_ptr<spdlog::logger> nutsack_logger::app_logger;

    void nutsack_logger::init(){
        spdlog::set_pattern("[%H:%M:%S %z] [%n] [%^---%L---%$] [thread %t] %v");
        nutsack_logger::engine_logger = spdlog::stdout_color_mt("NUTSACK");

        nutsack_logger::app_logger = spdlog::stdout_color_mt("APP");
    }
}

