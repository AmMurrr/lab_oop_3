#include "Figure.hpp"


class Trapezoid : Figure {
    public:
        Trapezoid();
        Trapezoid(std::vector<double> &x, std::vector<double> &y);
        ~Trapezoid();

        Trapezoid& operator=( Trapezoid &other);
        Trapezoid& operator=( Trapezoid &&other);
        bool operator==(Trapezoid &other);

        friend std::ostream& operator<<(std::ostream &os, Trapezoid &fig);
        friend std::istream& operator>>(std::istream &is, Trapezoid &fig);

        double area() const override;
        std::pair<double,double> center() const override;
        operator double() const override;

    private:
        std::vector<double> x;
        std::vector<double> y;
        double center_x;
        double center_y;
        double S;


};


inline std::ostream& operator<<(std::ostream &os, Trapezoid &fig) {
    for( int i = 0; i < 4; i++){
        os << i + 1 << "-ая точка: "<< '(' << fig.x[i] << ", " << fig.y[i] << ')' << '\n';
    }
    return os;
}

inline std::istream& operator>>(std::istream &is, Trapezoid &fig) {
    std::cout << "Точки вводятся с нижней левой по часовой стрелке" << '\n';
    for( int i = 0; i < 4; i++) {
        std::cout << "Введите "<< i + 1 << "-ую точку: "; 
        is >> fig.x[i] >> fig.y[i];
        std::cout << '\n';
    }
    return is;
}