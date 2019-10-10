#include <functional>

#include <squanch/window.h>
#include <squanch/app.h>
#include <squanch/logger.h>
#include <squanch/event.h>

namespace squanch{

    squanch_app::squanch_app(){
    
    }
 
    void squanch_app::run(){
    
    }

   void squanch_app::launch_window(){
       win = new window(std::bind(&squanch_app::on_event, std::ref(*this), std::placeholders::_1));
       win->launch();
       
       return;
   }

    void squanch_app::on_event(squanch_event& event){

        if(event.get_event_type() == squanch_event_type::key_press_event){
            this->on_key_press_event(event);
            return;
        }
 

        else if(event.get_event_type() == squanch_event_type::key_release_event){
            this->on_key_release_event(event);
            return;
        }

        else if(event.get_event_type() == squanch_event_type::mouse_cursor_event){
            this->on_mouse_cursor_event(event);
            return;
        }
        
        else if(event.get_event_type() == squanch_event_type::mouse_scroll_event){
            this->on_mouse_scroll_event(event);
            return;
        }


        else if(event.get_event_type() == squanch_event_type::mouse_button_press_event){
            this->on_mouse_button_press_event(event);
            return;
        }

        else if(event.get_event_type() == squanch_event_type::mouse_button_release_event){
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

    void squanch_app::on_key_press_event(squanch_event& event){
        NT_LOG_INFO("Key Press Event");
        // Pass event to layers
    }

    void squanch_app::on_key_release_event(squanch_event& event){
        NT_LOG_INFO("Key Release Event");
        // Pass event to layers
    }

    void squanch_app::on_mouse_cursor_event(squanch_event& event){
        // Pass event to layers
        NT_LOG_INFO("Mouse cursor Event");
    }

    void squanch_app::on_mouse_scroll_event(squanch_event& event){
        NT_LOG_INFO("Mouse scroll Event");
    }

    void squanch_app::on_mouse_button_press_event(squanch_event& event){
        NT_LOG_INFO("Mouse button press Event");
    }

    void squanch_app:: on_mouse_button_release_event(squanch_event& event){
        NT_LOG_INFO("Mouse button Release Event");
    }

    void squanch_app::on_close_event(squanch_event& event){
        // Pass event to layers
        NT_LOG_INFO("Window close Event");
    }
    
    void squanch_app::on_unkown_event(squanch_event& event){
        NT_LOG_INFO("Unkown Event");
        // Pass event to layers
    }
}
