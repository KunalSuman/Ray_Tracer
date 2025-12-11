#include "triangle.h" 

triangle :: triangle( glm :: vec3 point_a ,  glm :: vec3 point_b , glm :: vec3 point_c) : point_a(point_a) , point_b(point_b) , point_c(point_c){}

std :: pair<bool,float> triangle :: ray_intersection (ray r ,float tMin , float tMax , glm :: vec3 normal= {0.0f,0.0f ,0.0f})
{
    glm :: vec3 D = r.getDirection();
    glm :: vec3 E = r.getOrigin() ;
    float X1 = point_a.x - point_b.x;
    float Y1 = point_a.y - point_b.y;
    float Z1 = point_a.z - point_b.z;

    float X2 = point_a.x - point_c.x;
    float Y2 = point_a.y - point_c.y;
    float Z2 = point_a.z - point_c.z;

    float X3 = D.x;
    float Y3 = D.y;
    float Z3 = D.z;

    float X_right = point_a.x - E.x;
    float Y_right = point_a.y - E.y;
    float Z_right = point_a.z - E.z;

    glm::vec3 C0 = glm::vec3(X1, Y1, Z1);
    glm::vec3 C1 = glm::vec3(X2, Y2, Z2);
    glm::vec3 C2 = glm::vec3(X3, Y3, Z3);

    glm::mat3 A = glm::mat3(C0, C1, C2);
    glm::vec3 B = glm::vec3(X_right, Y_right, Z_right);

    glm::mat3 A_inv = glm::inverse(A);
    glm::vec3 result = A_inv * B;

    float b = result[0];
    float g = result[1];
    float t = result[2];

    if(b < 0 || g < 0 || (b + g) > 1 )
    {
        return {false, 0.0f};
    }   
       
    if(t < tMin || t> tMax)
    {
        return {false , 0.0f};
    }
    glm::vec3 normal_val = glm::normalize(glm::cross((C1 - C0) , (C2 - C0)));

    if (glm::dot(normal_val, glm::vec3(D.x, D.y, D.z)) > 0)
    {
        normal_val = -normal_val;
    }

    r.setNormal(normal_val);
    return {true,t};
}
