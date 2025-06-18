#ifndef DERIVED_GRAPHS_H
#define DERIVED_GRAPHS_H

#include "graph.h"

// DIRECTED GRAPH IMPLEMENTATION
class DirectedGraph : public Graph {
public:
    DirectedGraph() : Graph() {}
    virtual void addEdge(int from, int to, float weight) override;
};

// UNDIRECTED GRAPH IMPLEMENTATION
class UndirectedGraph : public Graph {
public:
    UndirectedGraph() : Graph() {}
    virtual void addEdge(int from, int to, float weight) override;
};

#endif // DERIVED_GRAPHS_H 