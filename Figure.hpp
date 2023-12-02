#pragma once
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <cmath>

class Figure
{
protected:
    Figure() = default;

public:
    
    virtual ~Figure() = default;
    virtual std::pair<double,double> center() const = 0;
    virtual double area() const = 0;
    virtual operator double() const = 0;

};


