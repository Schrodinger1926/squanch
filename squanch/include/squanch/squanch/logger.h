#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace squanch{

    class squanch_logger{

        static std::shared_ptr<spdlog::logger> engine_logger;
        static std::shared_ptr<spdlog::logger> app_logger;

        public:
            static void init();
            inline static std::shared_ptr<spdlog::logger>& get_engine_logger(){
                return squanch_logger::engine_logger;
            };
            inline static std::shared_ptr<spdlog::logger>& get_app_logger(){
                return squanch_logger::app_logger;
            }
    };
}

template<typename... Types>
inline void NT_LOG_INFO(Types... args){
    squanch::squanch_logger::get_engine_logger()->info(args...);
}

template<typename... Types>
inline void NT_LOG_ERROR(Types... args){
    squanch::squanch_logger::get_engine_logger()->error(args...);
}

template<typename... Types>
inline void LOG_INFO(Types... args){
    squanch::squanch_logger::get_app_logger()->info(args...);
}

template<typename... Types>
inline void LOG_ERROR(Types... args){
    squanch::squanch_logger::get_app_logger()->error(args...);
}


