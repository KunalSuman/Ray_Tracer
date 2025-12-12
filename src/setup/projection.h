#include "../utils.h"

class projection
{

    private :
        
        glm :: mat4 projection_matrix ;
        bool perspective ;
        bool orthographic ;

    public :
        
        projection();        
        glm :: mat4 getProjection()
        {
            return projection_matrix ;
        }
        
        void setupPerspective(float fovAngle , float farPlane , float nearPlane , float aspect ); 
        
        void setupOrthographic(float left ,float right , float top , float bottom , float nearPlane , float farPlane) ; 
};
