#pragma once

#include <nutsack/core.h>

namespace nutsack{

    /* Interface for application users */
    class NUTSACK_API nutsack_app{
    
        public:
            virtual ~nutsack_app() {};
            virtual void run()=0;

    };
}

