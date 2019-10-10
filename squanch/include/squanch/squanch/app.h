#pragma once

#include <squanch/core.h>

namespace squanch{
    
    //forward declaration
    class squanch_event;
    class squanch_key_event;
    class squanch_mouse_event;
    class window;

    /* Interface for application users */
    class NUTSACK_API squanch_app{
    
        public:
            squanch_app();
            virtual ~squanch_app() {};
            virtual void run();
            void launch_window();
            void on_event(squanch_event& event);
        
        private:
            
            virtual void on_key_press_event(squanch_event& event);
            
            virtual void on_key_release_event(squanch_event& event);
            
            virtual void on_mouse_cursor_event(squanch_event& event);
            
            virtual void on_mouse_scroll_event(squanch_event& event);
            
            virtual void on_mouse_button_press_event(squanch_event& event);
            
            virtual void on_mouse_button_release_event(squanch_event& event);

            virtual void on_close_event(squanch_event& event);
     
            virtual void on_unkown_event(squanch_event& event);

        private:
            //TODO: Initialize with nullptr
            window* win;
    };
}
