#pragma once

#include <nutsack/event.h>

namespace nutsack{

    class nutsack_close_event: public nutsack_event{
       
        public:
            ~nutsack_close_event(){};

            nutsack_close_event(int key, int action){};
            nutsack_event_type get_event_type() override{
                return nutsack_event_type::key_press_event;
            }
    };
}

