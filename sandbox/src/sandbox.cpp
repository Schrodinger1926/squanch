#include <iostream>
#include <chrono>
#include <thread>

#include "sandbox.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/basic_file_sink.h"

sandbox_app::~sandbox_app(){

};

void sandbox_app::run(){
    
    this->launch_window();
    /*
    while(true){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        spdlog::info("Running");
    }
    */
}

// Factory function
std::shared_ptr<nutsack::nutsack_app> nutsack::nutsack_create_application(){
    
    std::shared_ptr<nutsack::nutsack_app> app(new sandbox_app);
    
    return app;
}    
