#pragma once

#include <squanch/event.h>

namespace squanch{

    class squanch_close_event: public squanch_event{
       
        public:
            ~squanch_close_event(){};

            squanch_close_event(int key, int action){};
            squanch_event_type get_event_type() override{
                return squanch_event_type::key_press_event;
            }
    };
}

