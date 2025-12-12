#include "../utils.h"

class ray
{
    private :
    
        glm :: vec3 origin ;
        glm :: vec3 direction ;
        float time_step ;
        glm :: vec3 normal ;
    
    public :

        ray(glm :: vec3 origin , glm :: vec3 direction , float time_step) : origin(origin) , direction(direction) , time_step(time_step){}
        
        glm :: vec3 create_ray(glm :: vec3 origin , glm :: vec3 direction , float time_step);
        
        glm :: vec3 getOrigin()
        {
            return origin ;
        }   
        
        glm :: vec3 getDirection()
        {
            return direction ;
        }

        void setNormal(glm :: vec3 normal)
        {
            this->normal = normal ;
        }

};
