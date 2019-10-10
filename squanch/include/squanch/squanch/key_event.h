#pragma once

#include <squanch/event.h>

namespace squanch{

    class squanch_key_event: public squanch_event{
        
        protected:
            squanch_key_event(int key)
                : m_key_code(key){
                };
            
            int m_key_code;
    };


    class squanch_key_press_event: public squanch_key_event{

        public:
            squanch_key_press_event(int key, int rep)
                : squanch_key_event(key), m_rep(rep){};

            squanch_event_type get_event_type() override{
                return squanch_event_type::key_press_event;
            }

        private:
            int m_rep;
    };

    
    class squanch_key_release_event: public squanch_key_event{

        public:
            squanch_key_release_event(int key): squanch_key_event(key){
                };

            squanch_event_type get_event_type() override{
                return squanch_event_type::key_release_event;
            }
    };
}
