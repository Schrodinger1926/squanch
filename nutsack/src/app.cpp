#include <functional>

#include <nutsack/window.h>
#include <nutsack/app.h>
#include <nutsack/logger.h>

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

        NT_LOG_INFO("Event received");
        // Make compile-time selection
        // dispatch_event(event, trait);
        // dispatcher()
    
    };

    void nutsack_app::on_key_event(nutsack_key_event& event){
        // Pass event to layers

    };

    void nutsack_app::on_mouse_event(nutsack_mouse_event& event){
        // Pass event to layers
    };
}
