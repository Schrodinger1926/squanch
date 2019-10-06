#pragma once

#include <nutsack/event.h>

namespace nutsack{

    class nutsack_close_event: public nutsack_event{
       
        public:
            ~nutsack_close_event(){};

            nutsack_close_event(int key, int action){};
    };
}

