#include "projection.h"

projection :: projection()  :  projection_matrix(1.0f) , perspective(false) , orthographic(false) {}

void projection :: setupPerspective(float fovAngle , float farPlane , float nearPlane , float aspect ) 
{
    perspective = true ;
    orthographic = false ;
    projection_matrix = glm :: perspective(fovAngle, aspect, nearPlane, farPlane) ;

}

void projection ::setupOrthographic(float left ,float right , float top , float bottom , float nearPlane , float farPlane) 
{

    perspective = false ;
    orthographic = true ;
    projection_matrix = glm :: ortho(left , right , nearPlane , farPlane); 
}
