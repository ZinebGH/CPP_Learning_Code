#include "Rectangle.h"

#include <iostream>

int main()
{
  
    Rectangle rect(2.f, 4.f);
    std::cout << rect << std::endl;

    rect.scale(3);
    std::cout << rect << std::endl;

    Rectangle::set_default_size(2.f);
    Rectangle s1; // -> size is 2.f
    std::cout << s1 << std::endl;

    Rectangle s2; // -> size is 2.f
    std::cout << s2 << std::endl;

    Rectangle::set_default_size(7.f);
    Rectangle s3; // -> size is 7.f
    std::cout << s3 << std::endl;
 
    Rectangle s4; // -> size is 7.f
    std::cout << s4 << std::endl;

    Rectangle s5; // -> size is 7.f
    std::cout << s5 << std::endl;

    return 0;
}
