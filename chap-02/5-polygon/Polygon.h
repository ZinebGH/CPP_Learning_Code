#pragma once
#include <utility>
#include <vector>
#include <ostream>
using Vertex = std::pair<int, int>;
class Polygon{
    friend std::ostream& operator<<(std::ostream& stream, const Polygon& p);
    public:
        Polygon();
        void add_vertex(int x, int y);
        const Vertex& get_vertex(size_t i) const;
        
    private:
        std::vector<Vertex> _vertices;
};


