#pragma once

#include <nutsack/event.h>

namespace nutsack{

    class nutsack_key_event: public nutsack_event{
        
        protected:
            nutsack_key_event(int key)
                : m_key_code(key){
                };
            
            int m_key_code;
    };


    class nutsack_key_press_event: public nutsack_key_event{

        public:
            nutsack_key_press_event(int key, int rep)
                : nutsack_key_event(key), m_rep(rep){};

            nutsack_event_type get_event_type() override{
                return nutsack_event_type::key_press_event;
            }

        private:
            int m_rep;
    };

    
    class nutsack_key_release_event: public nutsack_key_event{

        public:
            nutsack_key_release_event(int key): nutsack_key_event(key){
                };

            nutsack_event_type get_event_type() override{
                return nutsack_event_type::key_release_event;
            }
    };
}
