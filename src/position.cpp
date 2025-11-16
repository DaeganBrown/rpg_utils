#include "position.hpp"


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

Position::~Position()
{

}

void Position::set_position(double x, double y, double z)
{
    x_pos = x;
    y_pos = y;
    z_pos = z;
}

void Position::set_rotation(double a, double b, double c, double d)
{
    a_q = a;
    b_q = b;
    c_q = c;
    d_q = d;
}

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