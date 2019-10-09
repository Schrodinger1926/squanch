#pragma once

namespace nutsack{
    
    enum class nutsack_mouse_button_type{
        right_button,
        left_button
    };

    // TODO: Define relationship b/w all of em
    enum class nutsack_event_type{
        key_press_event,
        key_release_event,
        mouse_cursor_event,
        mouse_scroll_event,
        mouse_button_press_event,
        mouse_button_release_event,
        window_resize_event,
        window_close_event,
        internal_app_event,
        unknown_event,
    };

    class nutsack_event{
        
        public:
            virtual ~nutsack_event(){};
            virtual nutsack_event_type get_event_type() = 0;
    };

    class nutsack_unknown_event: public nutsack_event{
        
        public:
            nutsack_event_type get_event_type() override{
                return nutsack_event_type::unknown_event;
            }
    };
}
