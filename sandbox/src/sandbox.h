#pragma once

#include <squanch.h>

class sandbox_app: public squanch::squanch_app{

    public:
        ~sandbox_app() override;
 
        void run() override;
};
