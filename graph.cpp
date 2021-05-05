//
// Created by sd on 06/04/2021.
//

#include "graph.h"

void Graph::fromArray(std::vector<std::vector<int>> data) {
    nodes = std::vector<Node>();
    outEdges = std::unordered_map<int, std::vector<int>>(data.size());
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


std::vector<int> Graph::breadthFirstSearch(int startNode) {
    bool *visitedNodes = new bool[nodes.size()]();
    std::vector<int> res;
    std::list<int> nodesQueue;

    nodesQueue.push_back(startNode);
    // visitedNodes[startNode] = true;

    while (!nodesQueue.empty()) {
        int curNode = nodesQueue.front();
        nodesQueue.pop_front();

        res.push_back(curNode);

        for(int n : outEdges[curNode]) {
            if(!visitedNodes[n]) {
                nodesQueue.push_back(n);
                visitedNodes[n] = true;
            }
        }
    }

    return res;
}