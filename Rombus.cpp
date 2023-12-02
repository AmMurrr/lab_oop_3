#include "Rombus.hpp"

Rombus::Rombus() {
    x = {0.0, 0.0, 0.0, 0.0};
    y = {0.0, 0.0, 0.0, 0.0};
    center_x = 0;
    center_y = 0;
    S = 0;
}

Rombus::~Rombus() {
    x = {};
    y = {};
    center_x = 0;
    center_y = 0;
    S = 0;
}

Rombus::Rombus(std::vector<double> &x, std::vector<double> &y) {
    this->x = x;
    this->y = y;
}

Rombus& Rombus::operator=(Rombus& other) {
    x = other.x;
    y = other.y;

    center_x = other.center_x;
    center_y = other.center_y;
    S = other.S;

    return *this;
}

Rombus& Rombus::operator=(Rombus&& other) {
    x = std::move(other.x);
    y = std::move(other.y);

    center_x = std::move(other.center_x);
    center_y = std::move(other.center_y);
    S = std::move(other.S);

    return *this;
}

bool Rombus::operator==(Rombus& other) {
    if(x == other.x and y == other.y){
        return true;
    } else {
        return false;
    }
        
}

double Rombus::area() const {
    double a = fabs(y[1] - y[3]);
    double b = fabs(x[2] - x[0]);

    return 0.5 * a * b;    
}

std::pair<double,double> Rombus::center() const{
    std::pair<double,double> mid;
    mid.first = double(x[0] + x[1] + x[2] + x[3])/4;
    mid.second = double(y[0] + y[1] + y[2] + y[3])/4;


    return mid;    
}

Rombus::operator double() const {
    return S;
}