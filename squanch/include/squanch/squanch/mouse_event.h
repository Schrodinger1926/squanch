#pragma once

#include <squanch/event.h>

namespace squanch{

    class squanch_mouse_event: public squanch_event{
        
        public:
            ~squanch_mouse_event(){};
    };


    class squanch_mouse_cursor_event: public squanch_mouse_event{

        public:
            explicit squanch_mouse_cursor_event(int xpos, int ypos): m_x(xpos), m_y(ypos){};
            
            squanch_event_type get_event_type() override{
                return squanch_event_type::mouse_cursor_event;
            }
        
        private:
            int m_x, m_y;
    };

    class squanch_mouse_button_press_event: public squanch_mouse_event{
        
        public:
            explicit squanch_mouse_button_press_event(squanch_mouse_button_type button)
            : m_button(button){};
            
            squanch_event_type get_event_type() override{
                return squanch_event_type::mouse_button_press_event;
            }

        private:
            squanch_mouse_button_type m_button;
    };
    

    class squanch_mouse_button_release_event: public squanch_mouse_event{
        
        public:
            explicit squanch_mouse_button_release_event(squanch_mouse_button_type button)
            : m_button(button){};
            
            squanch_event_type get_event_type() override{
                return squanch_event_type::mouse_button_release_event;
            }

        private:
            squanch_mouse_button_type m_button;
    };


    class squanch_mouse_scroll_event: public squanch_mouse_event{

        public:
            explicit squanch_mouse_scroll_event(int xoffset, int yoffset): m_xoffset(xoffset), m_yoffset(yoffset){};

            squanch_event_type get_event_type() override{
                return squanch_event_type::mouse_scroll_event;
            };
        private:
            int m_xoffset, m_yoffset;

    };
}
