#include "velocity.hpp"

/// @brief Default construct, gives object no linear velocity
LinearVelocity::LinearVelocity()
{  
    u_x = 0;
    u_y = 0;
    u_z = 0;
}

/// @brief Constructs object with velocity (x, y, z)
/// @param x Velocity North
/// @param y Velocity East
/// @param z Velocity Down
LinearVelocity::LinearVelocity(double x, double y, double z)
{
    u_x = x;
    u_y = y;
    u_z = z;
}

/// @brief Instnatly accelerates the object by (x, y, z)
/// @param x 
/// @param y 
/// @param z 
void LinearVelocity::Accelerate(double x, double y, double z)
{
    u_x += x;
    u_y += y;
    u_z += z;
}