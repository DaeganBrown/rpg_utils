#ifndef POSITION_H
#define POSITION_H
class Position 
{
public:
    /// @brief Meters North
    double x_pos;

    /// @brief Meters East
    double y_pos;

    /// @brief Meters Down
    double z_pos;
    double a_q;
    double b_q;
    double c_q;
    double d_q;

    Position();
    Position(double x, double y, double z);
    Position(double x, double y, double z, double a, double b, double c, double d);
    
    ~Position();

    void set_position(double x, double y, double z);
    void set_rotation(double a, double b, double c, double d);
    void move(double x, double y, double z, double a, double b, double c, double d);
};

#endif