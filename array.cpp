#include "array.hpp"

array::array() {
    _size = 10;
    _figures = new Figure*[_size];
    for(size_t i = 0; i < _size; i++)
        _figures[i] = nullptr;
}

Figure* array::operator[](size_t index) {
    return _figures[index];
}

array::array(size_t size) {
    _size = size;
    _figures = new Figure*[_size];
    for(size_t i = 0; i < _size; i++)
        _figures[i] = nullptr;
}

array::~array() {
    for(size_t i = 0; i < _size; i++) {
        delete _figures[i];
        _figures[i] = nullptr;
    }
    _size = 0;
    delete[] _figures;
    _figures = nullptr;
}

size_t array::get_size() {
    return _size;
}

void array::add_figure(size_t index, Figure* figure) {
    if(_figures[index] != nullptr)
        _figures[index] = nullptr;
    _figures[index] = figure;
}

void array::delete_figure(size_t index) {
    delete _figures[index];
    _figures[index] = nullptr;
}

