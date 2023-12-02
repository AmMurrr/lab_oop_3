#include "Figure.hpp"


class Pentagon : public Figure {
    public:
        Pentagon();
        Pentagon(std::vector<double> &x, std::vector<double> &y);
        ~Pentagon();

        Pentagon& operator=( Pentagon &other);
        Pentagon& operator=( Pentagon &&other);
        bool operator==(Pentagon &other);

        friend std::ostream& operator<<(std::ostream &os, Pentagon &fig);
        friend std::istream& operator>>(std::istream &is, Pentagon &fig);

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


inline std::ostream& operator<<(std::ostream &os, Pentagon &fig) {
    for( int i = 0; i < 5; i++){
        os << i + 1 << "-ая точка: "<< '(' << fig.x[i] << ", " << fig.y[i] << ')' << '\n';
    }
    return os;
}

inline std::istream& operator>>(std::istream &is, Pentagon &fig) {
    std::cout << "Точки вводятся с нижней левой по часовой стрелке" << '\n';
    for( int i = 0; i < 5; i++) {
        std::cout << "Введите "<< i + 1 << "-ую точку: "; 
        is >> fig.x[i] >> fig.y[i];
        
    }
    return is;
}