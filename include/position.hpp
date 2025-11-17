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

    /// @brief Creates a position at the origin with no roation
    Position();

    /// @brief Creates a position with no rotation at a specified (x, y, z)
    /// @param x Meters North
    /// @param y Meters East
    /// @param z Meters Down
    Position(double x, double y, double z);

    /// @brief Creates a position with specified rotation at a specific position
    /// @param x Meters North
    /// @param y Meters East
    /// @param z Meters Down
    /// @param a Quaternion Real Component
    /// @param b Quaternion i component
    /// @param c Quaternion j component
    /// @param d Quaternion k component
    Position(double x, double y, double z, double a, double b, double c, double d);

    /// @brief Standard deconstructor 
    ~Position();

    /// @brief Sets position of object to a specified (x,y,z)
    /// @param x Meters North
    /// @param y Meters East
    /// @param z Meters Down
    void set_position(double x, double y, double z);

    /// @brief Sets rotation of an object to a specifed (a, b, c, d)
    /// @param a Quaternion Real Component
    /// @param b Quaternion i component
    /// @param c Quaternion j component
    /// @param d Quaternion k component
    void set_rotation(double a, double b, double c, double d);

    /// @brief Transfroms the object an amount in every component
    /// @param x Meters North
    /// @param y Meters East
    /// @param z Meters Down
    /// @param a Quaternion Real Component
    /// @param b Quaternion i component
    /// @param c Quaternion j component
    /// @param d Quaternion k component
    void move(double x, double y, double z, double a, double b, double c, double d);
};