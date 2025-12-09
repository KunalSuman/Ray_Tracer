#include "../../utils.h"
#include "./object.h"
#include "../ray.cpp"

class triangle : public object
{
    private  :
        
        glm :: vec3 point_a ;
        glm :: vec3 point_b ;
        glm :: vec3 point_c ;

    public :
        
        triangle( glm :: vec3 point_a ,  glm :: vec3 point_b , glm :: vec3 point_c) : point_a(point_a) , point_b(point_b) , point_c(point_c){}

        bool ray_intersection(ray r)
        {
            
        }
};
