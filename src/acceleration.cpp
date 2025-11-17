#pragma once
#include "acceleration.hpp"


LinearAcceleration::LinearAcceleration()
{
    a_x = 0;
    a_y = 0;
    a_z = 0;
}

LinearAcceleration::LinearAcceleration(double x, double y, double z)
{
    a_x = x;
    a_y = y;
    a_z = z;
}

LinearAcceleration::~LinearAcceleration()
{

}

void LinearAcceleration::jerk(double x, double y, double z)
{
    a_x += x;
    a_y += z;
    a_z += z;
}

AngularAcceleration::AngularAcceleration()
{
    alpha_a = 0;
    alpha_b = 0;
    alpha_c = 0;
    alpha_d = 0;
}

AngularAcceleration::AngularAcceleration(double a, double b, double c, double d)
{
    alpha_a = a;
    alpha_b = b;
    alpha_c = c;
    alpha_d = d;
}

AngularAcceleration::~AngularAcceleration()
{

}

void AngularAcceleration::jerk(double a, double b, double c, double d)
{
    alpha_a += a;
    alpha_b += b;
    alpha_c += c;
    alpha_d += d;
}