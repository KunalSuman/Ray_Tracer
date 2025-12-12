#include "../../utils.h"
#include "object.h"
#include "../ray.h"

class sphere : public object
{
    private: 
        
        glm::vec3 position ;
        float radius ;

    public : 
        
        sphere(glm::vec3 position , float radius) : position(position) , radius(radius){} 

        std :: pair<bool , float> ray_intersection(ray r) ;
        
};
