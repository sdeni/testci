//
// Created by sd on 06/04/2021.
//

#include "graph.h"

void Graph::fromArray(std::vector<std::vector<int>> data) {
    nodes = std::vector<Node>();
    for(auto row: data) {
        nodes.push_back({0,0, std::to_string(row[0])});
        outEdges.insert(std::pair(row[0], std::vector<int>(row.begin()+1, row.end())));
    }
}

void Graph::print() {
    int i=0;
    auto row = outEdges.find(i);
    while(row != outEdges.end()) {
        std::cout << i << " -> ";

        std::for_each(row->second.begin(), row->second.end(), [](int x) {std::cout << x << " ";});
        std::cout << std::endl;

        i++;
        row = outEdges.find(i);
    }
}
