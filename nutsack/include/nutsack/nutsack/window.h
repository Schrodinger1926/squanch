#pragma once
#include <functional>

// Forward declaration
struct GLFWindow;

namespace nutsack{

    // Forward declaration
    class nutsack_event;
  
    class window{

        typedef std::function<void(nutsack::nutsack_event&)> t_event_cb;
     
        public:
            window();
            window(t_event_cb);
            ~window();
            void launch();
            void set_event_callback(t_event_cb event_cb);

        private:
            static t_event_cb event_cb;
            static void key_event_callback(GLFWindow* window, int key, int scancode, int action, int mods);
            static void mouse_event_callback(GLFWindow* window, int key, int scancode, int action, int mods);
            static void close_event_callback(GLFWindow* window, int key, int scancode, int action, int mods);
    };
}
