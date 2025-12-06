#include "../utils.h"
#include <glm/ext/matrix_clip_space.hpp>

class projection
{

    private :
        
        glm :: mat4 projection_matrix ;
        bool perspective ;
        bool orthographic ;

    public :
        
        projection() :  projection_matrix(1.0f) , perspective(false) , orthographic(false) {}
        
        glm :: mat4 getProjection()
        {
            return projection_matrix ;
        }
        
        void setupPerspective(float fovAngle , float farPlane , float nearPlane , float aspect )
        {
            perspective = true ;
            orthographic = false ;
            projection_matrix = glm :: perspective(fovAngle, aspect, nearPlane, farPlane) ;
        }
        
        void setupOrthographic(float left ,float right , float top , float bottom , float nearPlane , float farPlane)
        {
            perspective = false ;
            orthographic = true ;
            projection_matrix = glm :: ortho(left , right , nearPlane , farPlane); 
        }
};
