#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>

// Edge structure representing a connection between vertices
struct Edge {
    int to;         // Destination vertex
    float weight;   // Edge weight
    
    Edge(int t = -1, float w = 0.0f) : to(t), weight(w) {}
};

// Vertex structure representing a node in the graph
struct Vertex {
    int id;         // Vertex identifier
    Edge* edges;    // Dynamic array of edges
    int edgeCount;  // Number of edges
    int capacity;   // Current capacity of edges array
    
    Vertex(int i = -1) : id(i), edges(nullptr), edgeCount(0), capacity(0) {}
    
    ~Vertex() {
        delete[] edges;
    }
};

// Abstract base class for graph implementations
class Graph {
protected:
    Vertex* vertices;       // Dynamic array of vertices
    int vertexCount;        // Number of vertices
    int capacity;          // Current capacity of vertices array
    
    // function to resize vertices array
    void resizeVertices(int newCapacity);
    
    // function to find vertex index by ID
    int findVertexIndex(int id) const;

public:
    Graph();
    virtual ~Graph();
    
    // Pure virtual function for adding edges
    virtual void addEdge(int from, int to, float weight) = 0;
    
    //  interface methods
    void addVertex(int id);
    void removeVertex(int id);
    void printGraph() const;
    
   
    int getVertexCount() const { return vertexCount; }
    Vertex* getVertices() const { return vertices; }
};

#endif // GRAPH_H 