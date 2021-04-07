#include <iostream>
#include "graph.h"

int main() {
    std::cout << "Unit tests demo project" << std::endl;

    Graph g;

    g.fromArray({
        {0,1,2},
        {1,2},
        {2,1}
    });

    g.print();

    return 0;
}
