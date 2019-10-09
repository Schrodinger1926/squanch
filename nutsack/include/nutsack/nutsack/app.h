#pragma once

#include <nutsack/core.h>

namespace nutsack{
    
    //forward declaration
    class nutsack_event;
    class nutsack_key_event;
    class nutsack_mouse_event;
    class window;

    /* Interface for application users */
    class NUTSACK_API nutsack_app{
    
        public:
            nutsack_app();
            virtual ~nutsack_app() {};
            virtual void run();
            void launch_window();
            void on_event(nutsack_event& event);
        
        private:
            
            virtual void on_key_press_event(nutsack_event& event);
            
            virtual void on_key_release_event(nutsack_event& event);
            
            virtual void on_mouse_cursor_event(nutsack_event& event);
            
            virtual void on_mouse_scroll_event(nutsack_event& event);
            
            virtual void on_mouse_button_press_event(nutsack_event& event);
            
            virtual void on_mouse_button_release_event(nutsack_event& event);

            virtual void on_close_event(nutsack_event& event);
     
            virtual void on_unkown_event(nutsack_event& event);

        private:
            //TODO: Initialize with nullptr
            window* win;
    };
}
