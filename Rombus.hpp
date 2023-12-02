#include "Figure.hpp"


class Rombus : public Figure {
    public:
        Rombus();
        Rombus(std::vector<double> &x, std::vector<double> &y);
        ~Rombus();

        Rombus& operator=( Rombus &other);
        Rombus& operator=( Rombus &&other);
        bool operator==(Rombus &other);

        friend std::ostream& operator<<(std::ostream &os, Rombus &fig);
        friend std::istream& operator>>(std::istream &is, Rombus &fig);

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


inline std::ostream& operator<<(std::ostream &os, Rombus &fig) {
    for( int i = 0; i < 4; i++){
        os << i + 1 << "-ая точка: "<< '(' << fig.x[i] << ", " << fig.y[i] << ')' << '\n';
    }
    return os;
}

inline std::istream& operator>>(std::istream &is, Rombus &fig) {
    std::cout << "Точки вводятся с нижней левой по часовой стрелке" << '\n';
    for( int i = 0; i < 4; i++) {
        std::cout << "Введите "<< i + 1 << "-ую точку: "; 
        is >> fig.x[i] >> fig.y[i];
        
    }
    return is;
}