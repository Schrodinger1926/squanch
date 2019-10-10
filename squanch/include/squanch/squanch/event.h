#pragma once

namespace squanch{
    
    enum class squanch_mouse_button_type{
        right_button,
        left_button
    };

    // TODO: Define relationship b/w all of em
    enum class squanch_event_type{
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

    class squanch_event{
        
        public:
            virtual ~squanch_event(){};
            virtual squanch_event_type get_event_type() = 0;
    };

    class squanch_unknown_event: public squanch_event{
        
        public:
            squanch_event_type get_event_type() override{
                return squanch_event_type::unknown_event;
            }
    };
}
