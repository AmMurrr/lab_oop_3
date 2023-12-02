#include "Pentagon.hpp"



Pentagon::Pentagon() {
    x = {0.0, 0.0, 0.0, 0.0, 0.0};
    y = {0.0, 0.0, 0.0, 0.0, 0.0};
    center_x = 0;
    center_y = 0;
    S = 0;
}

Pentagon::~Pentagon() {
    x = {};
    y = {};
    center_x = 0;
    center_y = 0;
    S = 0;
}

Pentagon::Pentagon(std::vector<double> &x, std::vector<double> &y) {
    this->x = x;
    this->y = y;
}

Pentagon& Pentagon::operator=(Pentagon& other) {
    x = other.x;
    y = other.y;

    center_x = other.center_x;
    center_y = other.center_y;
    S = other.S;

    return *this;
}

Pentagon& Pentagon::operator=(Pentagon&& other) {
    x = std::move(other.x);
    y = std::move(other.y);

    center_x = std::move(other.center_x);
    center_y = std::move(other.center_y);
    S = std::move(other.S);

    return *this;
}

bool Pentagon::operator==(Pentagon& other) {
    if(x == other.x and y == other.y){
        return true;
    } else {
        return false;
    }
        
}

double Pentagon::area() const {

    double a = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1],2));
    double h = (0.5 * a) / (tan(M_PI/5));

    return 5 * (0.5*a*h);    
}

std::pair<double,double> Pentagon::center() const{
    std::pair<double,double> mid;
    mid.first = double(x[0] + x[1] + x[2] + x[3] + x[4])/5;
    mid.second = double(y[0] + y[1] + y[2] + y[3] + y[4])/5;


    return mid;    
}

Pentagon::operator double() const {
    return S;
}