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

    void Accelerate(double x, double y, double z);
    
};