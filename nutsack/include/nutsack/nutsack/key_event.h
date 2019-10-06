#pragma once

#include <nutsack/event.h>

namespace nutsack{

    class nutsack_key_event: public nutsack_event{
        
        public:
            ~nutsack_key_event(){};

            nutsack_key_event(int key, int action){};

    };
}

