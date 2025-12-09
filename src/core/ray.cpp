#include "../utils.h"

class ray
{
    private :
        glm :: vec3 origin ;
        glm :: vec3 direction ;
        float time_step ;
        
    public :
        ray(glm :: vec3 origin , glm :: vec3 direction , float time_step) : origin(origin) , direction(direction) , time_step(time_step){}
        glm :: vec3 create_ray(glm :: vec3 origin , glm :: vec3 direction , float time_step)
        {
            glm :: vec3 genrated_ray ;
            genrated_ray = origin + time_step*direction ;
            return genrated_ray ; 
        }
};
