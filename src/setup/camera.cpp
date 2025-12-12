#include "camera.h"


camera :: camera(glm :: vec3 camera_pos , glm :: vec3 camera_target , glm :: vec3 camera_up) : view_matrix(1.0f) , camera_pos(camera_pos) , camera_target(camera_target) , camera_up(camera_up) {}        
 

void camera :: setupView()
{

    glm :: vec3 forward = glm :: normalize (camera_target - camera_pos) ; 
    glm :: vec3 right = glm :: normalize(glm :: cross (forward ,  glm :: normalize(camera_up)));
    glm :: vec3 up = glm :: normalize (glm :: cross(right, forward)) ;
            
    view_matrix[0][0] = right.x ;
    view_matrix[1][0] = right.y ;
    view_matrix[2][0] = right.z ;
    view_matrix[3][0] = -glm :: dot(right, camera_pos) ;

    view_matrix[0][1] = up.x ;
    view_matrix[1][1] = up.y ;
    view_matrix[2][1] = up.z ;
    view_matrix[3][1] = -glm :: dot(up , camera_pos) ;
            
    view_matrix[0][2] = -forward.x ;
    view_matrix[1][2] = -forward.y ;
    view_matrix[2][2] = -forward.z ;
    view_matrix[3][2] = glm :: dot(forward , camera_pos);
            
    view_matrix[0][3] = 0 ;
    view_matrix[1][3] = 0 ;
    view_matrix[2][3] = 0 ;
    view_matrix[3][3] = 1 ;

}
