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

    void window::key_event_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
        
        // create a key  event and dispatch
        nutsack_event* event_ptr = new nutsack_key_event(key, action);
        window::event_cb(*event_ptr);
    }

    void window::mouse_event_callback(GLFWwindow* window, double xpos, double ypos){
        
        // create a mouse event and dispatch
        nutsack_event* event = new nutsack_mouse_event(xpos, ypos);
        window::event_cb(*event);
    }

    void window::close_event_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
        
        // create a close event and dispatch
        nutsack_event* event = new nutsack_close_event(key, action);
        window::event_cb(*event);
    }
    
    // ------------ MEMBERS -------------
    window::window(window::t_event_cb cb){
        window::event_cb = cb;
    }


    window::~window(){
        // Terminate window   
        NT_LOG_INFO("terminating window");
        
        // Do some reference count over here
        glfwTerminate();
    }

    void window::launch(){
        
        // should be called only once
        if (!glfwInit()){
            // Initialization faileda
            std::string err_msg = "glfw init failed";
            NT_LOG_ERROR(err_msg);
            
            /* Check refrence for throwing exceptions from construct */
            throw(err_msg);
        }

        this->init();
        
    }

    void window::set_event_callback(window::t_event_cb cb){
        window::event_cb = cb;
    }

    void window::init(){
        
        // Launch window
        NT_LOG_INFO("launching window");
        glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
        glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
        GLFWwindow* win = glfwCreateWindow(640, 480, "My Title", NULL, NULL);

        /* Set all callbacks */
        glfwSetKeyCallback(win, window::key_event_callback);
        
        glfwSetCursorPosCallback(win, window::mouse_event_callback);
        

        while (!glfwWindowShouldClose(win)){
            //std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            //LOG_INFO("Running");
            glfwPollEvents();       
        }
    }


}
