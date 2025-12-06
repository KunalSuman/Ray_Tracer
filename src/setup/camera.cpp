#include "../utils.h"

class camera{
    private :
        glm :: mat4 view;
        glm :: vec3 camera_pos;
        glm :: vec3 camera_target;
        glm :: vec3 camera_up;
    public :
        camera(glm :: vec3 camera_pos , glm :: vec3 camera_target , glm :: vec3 camera_up) : camera_pos(camera_pos) , camera_target(camera_target) , camera_up(camera_up) {}        
        glm :: mat4 getView()
        {
            return view ;
        }
        
        void setupView()
        {
            view = glm :: lookAt(camera_pos , camera_target , camera_up);
        }
        
};

