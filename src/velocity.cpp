#pragma once
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


LinearVelocity::~LinearVelocity()
{

}

/// @brief Instantly accelerates the object by (x, y, z)
/// @param x 
/// @param y 
/// @param z 
void LinearVelocity::accelerate(double x, double y, double z)
{
    u_x += x;
    u_y += y;
    u_z += z;
}

/// @brief Default construct, gives object no angular velocity
AngularVelocity::AngularVelocity()
{
    w_a = 0;
    w_b = 0;
    w_c = 0;
    w_d = 0;
}

/// @brief Constructs an object with angular velocity (a,b,c,d)
/// @param a Velocity in Quaternion A
/// @param b Velocity in Quaternion B
/// @param c Velocity in Quaternion C
/// @param d Velocity in Quaternion D
AngularVelocity::AngularVelocity(double a, double b, double c, double d)
{
    w_a = a;
    w_b = b;
    w_c = c;
    w_d = d;
}

AngularVelocity::~AngularVelocity()
{

}

/// @brief Accelerates the object angularly by (a, b, c, d)
/// @param a Velocity in Quaternion A
/// @param b Velocity in Quaternion B
/// @param c Velocity in Quaternion C
/// @param d Velocity in Quaternion D
void AngularVelocity::accelerate(double a, double b, double c, double d)
{
    w_a += a;
    w_b += b;
    w_c += c;
    w_d += d;
}