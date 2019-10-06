#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace nutsack{

    class nutsack_logger{

        static std::shared_ptr<spdlog::logger> engine_logger;
        static std::shared_ptr<spdlog::logger> app_logger;

        public:
            static void init();
            inline static std::shared_ptr<spdlog::logger>& get_engine_logger(){
                return nutsack_logger::engine_logger;
            };
            inline static std::shared_ptr<spdlog::logger>& get_app_logger(){
                return nutsack_logger::app_logger;
            }

    };
}

/*
#ifdef DEV
#define ENGINE_INFO(...) nutsack::get_engine_logger->info(__VA_ARGS__);
#define ENGINE_DEBUG(...) nutsack::get_engine_logger->debug(__VA_ARGS__);
#define ENGINE_WARN(...) nutsack::get_engine_logger->warn(__VA_ARGS__);
#define ENGINE_ERROR(...) nutsack::get_engine_logger->error(__VA_ARGS__);
#define ENGINE_FATAL(...) nutsack::get_engine_logger->fatal(__VA_ARGS__);

#else

#define ENGINE_INFO(...) 
#define ENGINE_DEBUG(...)
#define ENGINE_WARN(...)
#define ENGINE_ERROR(...)
#define ENGINE_FATAL(...)
#endif //DEV
*/

template<typename... Types>
inline void NT_LOG_INFO(Types... args){
    nutsack::nutsack_logger::get_engine_logger()->info(args...);
}

template<typename... Types>
inline void NT_LOG_ERROR(Types... args){
    nutsack::nutsack_logger::get_engine_logger()->error(args...);
}

template<typename... Types>
inline void LOG_INFO(Types... args){
    nutsack::nutsack_logger::get_app_logger()->info(args...);
}

template<typename... Types>
inline void LOG_ERROR(Types... args){
    nutsack::nutsack_logger::get_app_logger()->error(args...);
}


