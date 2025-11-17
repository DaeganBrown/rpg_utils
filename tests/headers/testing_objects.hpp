#pragma once
#include <string>

struct TEST 
{
    bool success;
    double complete;
    std::string output;
    
    void init()
    {
        success = false;
        complete = 0.0;
        output = "[WARN][testing_objects.hpp] Uninitialized Output";
    }
};