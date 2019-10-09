#pragma once

#include <nutsack/event.h>

namespace nutsack{

    class nutsack_mouse_event: public nutsack_event{
        
        public:
            ~nutsack_mouse_event(){};
    };


    class nutsack_mouse_cursor_event: public nutsack_mouse_event{

        public:
            explicit nutsack_mouse_cursor_event(int xpos, int ypos): m_x(xpos), m_y(ypos){};
            
            nutsack_event_type get_event_type() override{
                return nutsack_event_type::mouse_cursor_event;
            }
        
        private:
            int m_x, m_y;
    };

    class nutsack_mouse_button_press_event: public nutsack_mouse_event{
        
        public:
            explicit nutsack_mouse_button_press_event(nutsack_mouse_button_type button)
            : m_button(button){};
            
            nutsack_event_type get_event_type() override{
                return nutsack_event_type::mouse_button_press_event;
            }

        private:
            nutsack_mouse_button_type m_button;
    };
    

    class nutsack_mouse_button_release_event: public nutsack_mouse_event{
        
        public:
            explicit nutsack_mouse_button_release_event(nutsack_mouse_button_type button)
            : m_button(button){};
            
            nutsack_event_type get_event_type() override{
                return nutsack_event_type::mouse_button_release_event;
            }

        private:
            nutsack_mouse_button_type m_button;
    };


    class nutsack_mouse_scroll_event: public nutsack_mouse_event{

        public:
            explicit nutsack_mouse_scroll_event(int xoffset, int yoffset): m_xoffset(xoffset), m_yoffset(yoffset){};

            nutsack_event_type get_event_type() override{
                return nutsack_event_type::mouse_scroll_event;
            };
        private:
            int m_xoffset, m_yoffset;

    };
}
