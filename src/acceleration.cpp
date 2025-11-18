#include "acceleration.hpp"

/// @brief Default contstructor, object with no acceleration
LinearAcceleration::LinearAcceleration()
{
    a_x = 0;
    a_y = 0;
    a_z = 0;
}

/// @brief Create object with (x,y,z) linear acceleration
/// @param x Acceleration North
/// @param y Acceleration East
/// @param z Acceleration Down
LinearAcceleration::LinearAcceleration(double x, double y, double z)
{
    a_x = x;
    a_y = y;
    a_z = z;
}

/// @brief Standard deconstructor 
LinearAcceleration::~LinearAcceleration()
{

}

/// @brief Jerk the object by (x,y,z) acceleration vector
/// @param x Acceleration North
/// @param y Acceleration East
/// @param z Acceleration Down
void LinearAcceleration::jerk(double x, double y, double z)
{
    a_x += x;
    a_y += z;
    a_z += z;
}

/// @brief Set the object linear acceleration to (x,y,z)
/// @param x Acceleration North
/// @param y Acceleration East
/// @param z Acceleration Down
void LinearAcceleration::set_acceleration(double x, double y, double z)
{
    a_x = x;
    a_y = z;
    a_z = z;
}

/// @brief Default constructor, makes object with no angular velocity
AngularAcceleration::AngularAcceleration()
{
    alpha_a = 0;
    alpha_b = 0;
    alpha_c = 0;
    alpha_d = 0;
}

/// @brief Constructs object with angular velocity (a,b,c,d)
/// @param a Acceleration in the Quaternion A
/// @param b Acceleration in the Quaternion B
/// @param c Acceleration in the Quaternion C
/// @param d Acceleration in the Quaternion D
AngularAcceleration::AngularAcceleration(double a, double b, double c, double d)
{
    alpha_a = a;
    alpha_b = b;
    alpha_c = c;
    alpha_d = d;
}

/// @brief Standard deconstructor 
AngularAcceleration::~AngularAcceleration()
{

}

/// @brief Jerks the angular acceleration of the object by (a,b,c,d)
/// @param a Acceleration in the Quaternion A
/// @param b Acceleration in the Quaternion B
/// @param c Acceleration in the Quaternion C
/// @param d Acceleration in the Quaternion D
void AngularAcceleration::jerk(double a, double b, double c, double d)
{
    alpha_a += a;
    alpha_b += b;
    alpha_c += c;
    alpha_d += d;
}

/// @brief Sets the angular acceleration to (a,b,c,d)
/// @param a Acceleration in the Quaternion A
/// @param b Acceleration in the Quaternion B
/// @param c Acceleration in the Quaternion C
/// @param d Acceleration in the Quaternion D
void AngularAcceleration::set_acceleration(double a, double b, double c, double d)
{
    alpha_a = a;
    alpha_b = b;
    alpha_c = c;
    alpha_d = d;
}