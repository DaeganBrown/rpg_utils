#pragma once

class LinearAcceleration 
{
    /// @brief Linear Acceleration North
    double a_x;

    /// @brief Linear Acceleration East
    double a_y;

    /// @brief Linear Acceleration Down
    double a_z;

    LinearAcceleration();
    LinearAcceleration(double x, double y, double z);

    ~LinearAcceleration();

    void jerk(double x, double y, double z);
    void set_acceleration(double x, double y, double z);
};

class AngularAcceleration
{
    /// @brief Angular Acceleration in Quaternion A
    double alpha_a;

    /// @brief Angular Acceleration in Quaternion B
    double alpha_b;

    /// @brief Angular Acceleration in Quaternion C
    double alpha_c;

    /// @brief Angular Acceleration in Quaternion D
    double alpha_d;

    AngularAcceleration();
    AngularAcceleration(double a, double b, double c, double d);

    ~AngularAcceleration();

    void jerk(double a, double b, double c, double d);
    void set_acceleration(double a, double b, double c, double d);
};