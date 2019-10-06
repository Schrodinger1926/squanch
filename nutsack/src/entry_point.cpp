#include <iostream>
#include <nutsack/entry_point.h>
#include <nutsack/logger.h>

void system_init() {

    nutsack::nutsack_logger::init();

}

int main(int argc, char** argv){
 
    system_init();

    NT_LOG_INFO(" === Welcome to NUTSACK ENGINE ===");

    std::shared_ptr<nutsack::nutsack_app> app = nutsack::nutsack_create_application();

    app->run();
}
