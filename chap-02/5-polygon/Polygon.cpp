#include "Polygon.h"

Polygon::Polygon()
{}

void Polygon::add_vertex(int x, int y)
{
    _vertices.emplace_back(x, y);
}


std::ostream& operator<<(std::ostream& stream, const Polygon& p){
    for (const auto& v: p._vertices)
    {
        stream << "(" << v.first << "," << v.second << ") ";
    }

    return stream;
}

const Vertex& Polygon::get_vertex(size_t i) const {return _vertices[i];};