#pragma once

class LinearVelocity
{
public:
    /// @brief Velocity in the North Direction
    double u_x;

    /// @brief Velocity in the East Direction
    double u_y;

    /// @brief Velocity downwards
    double u_z;

    LinearVelocity();

    LinearVelocity(double x, double y, double z);

    ~LinearVelocity();

    void accelerate(double x, double y, double z);
    
};

class AngularVelocity
{
    /// @brief Angular Velocity in Quaternion A
    double w_a;

    /// @brief Angular Velocity in Quaternion B
    double w_b;

    /// @brief Angular Velocity in Quaternion C
    double w_c;

    /// @brief Angular Velocity in Quaternion D
    double w_d;

    AngularVelocity();

    AngularVelocity(double a, double b, double c, double d);

    void accelerate(double a, double b, double c, double d);
};