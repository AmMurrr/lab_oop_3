#include "Figure.hpp"

class array
{
private:
    size_t _size;
    Figure** _figures;
public:
    array();
    array(size_t size);
    ~array();
    size_t get_size();

    Figure* operator[](size_t index);
    void delete_figure(size_t index);
    void add_figure(size_t index, Figure* figure);

};

