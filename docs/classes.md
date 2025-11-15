# List of Classes

# Details of Classes

## Position()

The purpose of the position class is to store a three dimensional position in game space. It is a crucial part of all 3D game objects. Movement is nothing but adjusting this position. It also stores rotation, in the form of quaternions. The assumed frame is NED, so x is North-South, y is East-West, and z is Down-Up. 

### Members

- `x`: Stores the position, in meters, North of center
- `y`: Stores the position, in meters, East of center
- `z`: Stores the position, in meters, Down of center
- `a`: Quaternion 
- `b`: Quaternion 
- `c`: Quaternion 
- `d`: Quaternion 



### Methods

