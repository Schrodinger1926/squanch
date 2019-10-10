#include <iostream>
#include <squanch/entry_point.h>
#include <squanch/logger.h>

void system_init() {

    squanch::squanch_logger::init();

}

int main(int argc, char** argv){
 
    system_init();

    NT_LOG_INFO(" === Welcome to SQUANCH ENGINE ===");

    std::shared_ptr<squanch::squanch_app> app = squanch::squanch_create_application();

    app->run();
}
