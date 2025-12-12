#include "../utils.h"
#include "ray.h"

glm :: vec3 ray :: create_ray(glm :: vec3 origin , glm :: vec3 direction , float time_step)
 
{
    glm :: vec3 genrated_ray ;
    genrated_ray = origin + time_step*direction ;
    return genrated_ray ; 

}

