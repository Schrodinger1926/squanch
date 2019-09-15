#pragma once

#include <nutsack.h>

class sandbox_app: public nutsack::nutsack_app{

    public:
        ~sandbox_app() override;
 
        void run() override;
};
