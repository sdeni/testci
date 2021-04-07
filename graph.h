//
// Created by sd on 06/04/2021.
//

#ifndef TESTEDGRAPH_GRAPH_H
#define TESTEDGRAPH_GRAPH_H

#include <vector>
#include <list>
#include <string>
#include <map>
#include <unordered_map>
#include <iostream>
#include <algorithm>

struct Node {
    float x;
    float y;
    std::string name;
};

class Graph {
private:
    std::vector<Node> nodes;
    std::unordered_map<int, std::vector<int>> outEdges;

public:
    void fromArray(std::vector<std::vector<int>> data);
    void print();
    std::vector<int> breadthFirstSearch(int startNode);
};


#endif //TESTEDGRAPH_GRAPH_H
