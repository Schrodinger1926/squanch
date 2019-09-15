#include <iostream>
#include <nutsack/entry_point.h>
#include <nutsack/logger.h>

int main(int argc, char** argv){
 
    nutsack::nutsack_logger::init();

    nutsack::nutsack_logger::get_engine_logger()->info(" === Welcome to NUTSACK ENGINE ===");

    std::shared_ptr<nutsack::nutsack_app> app = nutsack::nutsack_create_application();

    app->run();
}
