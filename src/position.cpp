#pragma once
#include "position.hpp"

/// @brief Creates a position at the origin with no roation
Position::Position()
{
    x_pos = 0;
    y_pos = 0;
    z_pos = 0;
    a_q = 0;
    b_q = 0;
    c_q = 0;
    d_q = 0;
}

/// @brief Creates a position with no rotation at a specified (x, y, z)
/// @param x Meters North
/// @param y Meters East
/// @param z Meters Down
Position::Position(double x, double y, double z)
{
    x_pos = x;
    y_pos = y;
    z_pos = z;
    a_q = 0;
    b_q = 0;
    c_q = 0;
    d_q = 0;
}

/// @brief Creates a position with specified rotation at a specific position
/// @param x Meters North
/// @param y Meters East
/// @param z Meters Down
/// @param a Quaternion Real Component
/// @param b Quaternion i component
/// @param c Quaternion j component
/// @param d Quaternion k component
Position::Position(double x, double y, double z, double a, double b, double c, double d)
{
    x_pos = x;
    y_pos = y;
    z_pos = z;
    a_q = a;
    b_q = b;
    c_q = c;
    d_q = d;
}

/// @brief Standard deconstructor 
Position::~Position()
{

}

/// @brief Sets position of object to a specified (x,y,z)
/// @param x Meters North
/// @param y Meters East
/// @param z Meters Down
void Position::set_position(double x, double y, double z)
{
    x_pos = x;
    y_pos = y;
    z_pos = z;
}

/// @brief Sets rotation of an object to a specifed (a, b, c, d)
/// @param a Quaternion Real Component
/// @param b Quaternion i component
/// @param c Quaternion j component
/// @param d Quaternion k component
void Position::set_rotation(double a, double b, double c, double d)
{
    a_q = a;
    b_q = b;
    c_q = c;
    d_q = d;
}

/// @brief Transfroms the object an amount in every component
/// @param x Meters North
/// @param y Meters East
/// @param z Meters Down
/// @param a Quaternion Real Component
/// @param b Quaternion i component
/// @param c Quaternion j component
/// @param d Quaternion k component
void Position::move(double x, double y, double z, double a, double b, double c, double d)
{
    x_pos = x_pos + x;
    y_pos = y_pos + y;
    z_pos = z_pos + z;
    a_q = a_q + a;
    b_q = b_q + b;
    c_q = c_q + c;
    d_q = d_q + d;
}