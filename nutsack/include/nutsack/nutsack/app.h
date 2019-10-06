#pragma once

#include <nutsack/core.h>

namespace nutsack{
    
    //forward declaration
    class nutsack_event;
    class nutsack_key_event;
    class nutsack_mouse_event;
    class window;


    class event_dispatcher{
        
        public:
    
    };


    /* Interface for application users */
    class NUTSACK_API nutsack_app{
    
        public:
            nutsack_app();
            virtual ~nutsack_app() {};
            virtual void run();
            void launch_window();
            void on_event(nutsack_event& event);
        
        private:

            virtual void on_key_event(nutsack_key_event& event);
            
            virtual void on_mouse_event(nutsack_mouse_event& event);
     
        
        private:
            //TODO: Initialize with nullptr
            window* win;
    };
}

