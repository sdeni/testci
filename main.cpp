#include <iostream>
#include "graph.h"

int main() {
    std::cout << "Unit tests demo project" << std::endl;

    Graph g;

    g.fromArray({
        {0,1,2},
        {1,2,3},
        {2,1},
        {3,0,1}
    });

    g.fromArray({
                        {0,2,4},
                        {1,2,3},
                        {2,1,4},
                        {3,0,1},
                        {4,3}
                });

    g.print();

    auto nodesList = g.breadthFirstSearch(0);
    std::cout << "Breadth first walk result: ";
    for(int n : nodesList) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
