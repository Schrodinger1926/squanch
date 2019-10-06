#pragma once

#include <nutsack/event.h>

namespace nutsack{

    class nutsack_mouse_event: public nutsack_event{
        
        public:
            ~nutsack_mouse_event(){};

            nutsack_mouse_event(int key, int action){};
    };
}
