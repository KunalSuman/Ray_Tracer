#include "../utils.h"

class camera
{
    
    private :
    
        glm :: mat4 view_matrix;
        glm :: vec3 camera_pos;
        glm :: vec3 camera_target;
        glm :: vec3 camera_up;

    public :
    
        camera(glm :: vec3 camera_pos , glm :: vec3 camera_target , glm :: vec3 camera_up);        
        glm :: mat4 getView()
        {
            return view_matrix ;
        }
        
        void setupView();

};

