#include <functional>

#include <nutsack/window.h>
#include <nutsack/app.h>
#include <nutsack/logger.h>
#include <nutsack/event.h>

namespace nutsack{

    nutsack_app::nutsack_app(){
    
    }
 
    void nutsack_app::run(){
    
    }

   void nutsack_app::launch_window(){
       win = new window(std::bind(&nutsack_app::on_event, std::ref(*this), std::placeholders::_1));
       win->launch();
       
       return;
   }

    void nutsack_app::on_event(nutsack_event& event){

        if(event.get_event_type() == nutsack_event_type::key_press_event){
            this->on_key_press_event(event);
            return;
        }
 

        else if(event.get_event_type() == nutsack_event_type::key_release_event){
            this->on_key_release_event(event);
            return;
        }

        else if(event.get_event_type() == nutsack_event_type::mouse_cursor_event){
            this->on_mouse_cursor_event(event);
            return;
        }
        
        else if(event.get_event_type() == nutsack_event_type::mouse_scroll_event){
            this->on_mouse_scroll_event(event);
            return;
        }


        else if(event.get_event_type() == nutsack_event_type::mouse_button_press_event){
            this->on_mouse_button_press_event(event);
            return;
        }

        else if(event.get_event_type() == nutsack_event_type::mouse_button_release_event){
            this->on_mouse_button_release_event(event);
            return;
        }

        else{
            this->on_unkown_event(event);
            return;
        }
        
        NT_LOG_INFO("Event not defined");
        return;
    }

    void nutsack_app::on_key_press_event(nutsack_event& event){
        NT_LOG_INFO("Key Press Event");
        // Pass event to layers
    }

    void nutsack_app::on_key_release_event(nutsack_event& event){
        NT_LOG_INFO("Key Release Event");
        // Pass event to layers
    }

    void nutsack_app::on_mouse_cursor_event(nutsack_event& event){
        // Pass event to layers
        NT_LOG_INFO("Mouse cursor Event");
    }

    void nutsack_app::on_mouse_scroll_event(nutsack_event& event){
        NT_LOG_INFO("Mouse scroll Event");
    }

    void nutsack_app::on_mouse_button_press_event(nutsack_event& event){
        NT_LOG_INFO("Mouse button press Event");
    }

    void nutsack_app:: on_mouse_button_release_event(nutsack_event& event){
        NT_LOG_INFO("Mouse button Release Event");
    }

    void nutsack_app::on_close_event(nutsack_event& event){
        // Pass event to layers
        NT_LOG_INFO("Window close Event");
    }
    
    void nutsack_app::on_unkown_event(nutsack_event& event){
        NT_LOG_INFO("Unkown Event");
        // Pass event to layers
    }
}
