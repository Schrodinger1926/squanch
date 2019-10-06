#include <nutsack/window.h>
#include <nutsack/logger.h>
#include <nutsack/event.h>
#include <nutsack/key_event.h>
#include <nutsack/mouse_event.h>
#include <nutsack/close_event.h>
#include <GLFW/glfw3.h>

#include <thread>
#include <chrono>

namespace nutsack{

    // ------------ CALLBACKS -------------
    window::t_event_cb window::event_cb;


    window::window(t_event_cb event_cb){
        window::event_cb = event_cb;
    }

    void window::key_event_callback(GLFWindow* window, int key, int scancode, int action, int mods){
        
        // create a key  event and dispatch
        nutsack_event* event_ptr = new nutsack_key_event(key, action);
        window::event_cb(*event_ptr);
    }

    void window::mouse_event_callback(GLFWindow* window, int key, int scancode, int action, int mods){
        
        // create a mouse event and dispatch
        nutsack_event* event = new nutsack_mouse_event(key, action);
        window::event_cb(*event);
    }

    void window::close_event_callback(GLFWindow* window, int key, int scancode, int action, int mods){
        
        // create a close event and dispatch
        nutsack_event* event = new nutsack_close_event(key, action);
        window::event_cb(*event);
    }
    
    // ------------ MEMBERS -------------
    window::window(){
        
        // should be called only once
        if (!glfwInit()){
            // Initialization faileda
            std::string err_msg = "window init failed";
            NT_LOG_ERROR(err_msg);
            
            /* Check refrence for throwing exceptions from construct */
            throw(err_msg);
        }
    }
    

    window::~window(){
        // Terminate window   
        NT_LOG_INFO("terminating window");
        
        // Do some reference count over here
        glfwTerminate();
    }


    void window::launch(){
        // Launch window
        NT_LOG_INFO("launching window");
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
        GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

        while (!glfwWindowShouldClose(window)){
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            LOG_INFO("Running");
            glfwPollEvents();       
        }
    }

    void window::set_event_callback(window::t_event_cb event_cb){
        
    }
}
