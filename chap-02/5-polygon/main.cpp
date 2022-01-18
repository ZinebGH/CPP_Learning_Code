#include <iostream>
#include "Polygon.h"
int main()
{
    Polygon polygon;

    polygon.add_vertex(2, 3);
    polygon.add_vertex(4, 5);
    polygon.add_vertex(6, 7);
    std::cout << polygon << std::endl;

    const auto& vertex = polygon.get_vertex(1);
    std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; // -> (4,5)

<<<<<<< HEAD
    polygon.add_vertex(8, 9);
    for (auto i = 0; i < 200; ++i)
    {
        polygon.add_vertex(i, i * 2);
    }
=======
    // for (auto i = 0; i < 200; ++i)
    // {
    //     polygon.add_vertex(i, i * 2);
    // }
>>>>>>> upstream/master

    std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; //-> ???

    std::cout << "(" << vertex.first << "," << vertex.second << ")" << std::endl; //-> ???

    return 0;
}
