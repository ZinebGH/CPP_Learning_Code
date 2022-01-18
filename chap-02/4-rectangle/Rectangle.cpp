// Implement Rectangle functions here.
#include "Rectangle.h"


float Rectangle::_default_size = 0.f;

Rectangle::Rectangle()
{}
Rectangle::Rectangle(float length, float width)
        : _length { length }
        , _width { width }
    {}


Rectangle::Rectangle(float side)
        : Rectangle  { side, side}
    {}

void Rectangle::scale(float ratio)
    {
        _length *= ratio;
        _width *= ratio;
    }

Rectangle::Rectangle()
    : Rectangle { _default_size }
{}

void Rectangle::set_default_size(float default_size){
    _default_size = default_size;
}


std::ostream& operator<<(std::ostream& stream, const Rectangle& rect){
    return stream << "{ L: " << rect.get_length() << ", W:" << rect.get_width() << " }";
}