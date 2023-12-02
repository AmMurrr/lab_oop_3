#include "Figure.hpp"
#include "Trapezoid.hpp"
#include "Rombus.hpp"
#include "Pentagon.hpp"
#include "array.hpp"


int main(int argc, char const *argv[])
{
    array arr = array(3);
    Trapezoid trap;
    Rombus rob;
    Pentagon penta;
   // std::cin >> trap;
    //std::cin >> rob;
    std::cin >> penta;

    arr.add_figure(0, &trap);
    arr.add_figure(1, &rob);
    arr.add_figure(2, &penta);

    std::cout << "Трапеция" << std::endl;
    std::cout << "Площадь: " << arr[0]->area() << std::endl;
    std::cout << "Центр: " << arr[0]->center().first << ' ' << arr[0]->center().second << std::endl;
    

    std::cout << "Ромбус" << std::endl;
    std::cout << "Площадь: " << arr[1]->area() << std::endl;
    std::cout << "Центр: " << arr[1]->center().first << ' ' << arr[1]->center().second << std::endl;

    std::cout << "Пятиулогльник" << std::endl;
    std::cout << "Площадь: " << arr[2]->area() << std::endl;
    std::cout << "Центр: " << arr[2]->center().first << ' ' << arr[2]->center().second << std::endl;
    std::cout << penta;




    

    return 0;
}
