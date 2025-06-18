#include "derived_graphs.h"

void DirectedGraph::addEdge(int from, int to, float weight) {
    int fromIndex = findVertexIndex(from);
    int toIndex = findVertexIndex(to);
    
    if (fromIndex == -1 || toIndex == -1) {
        std::cout << "One or both vertices not found!" << std::endl;
        return;
    }
    
    Vertex& v = vertices[fromIndex];
    
    // CHECK IF EDGE ALREADY EXIST
    for (int i = 0; i < v.edgeCount; ++i) {
        if (v.edges[i].to == to) {
            v.edges[i].weight = weight;  // TO UPDATE EDGE IF ALREADY EXIST
            return;
        }
    }
    
    // RESIZE THE EDGE ARRAY IF NECCESSARY
    if (v.edgeCount >= v.capacity) {
        int newCapacity = v.capacity == 0 ? 1 : v.capacity * 2;
        Edge* newEdges = new Edge[newCapacity];
        
        // COPY EXISTING EDGES
        for (int i = 0; i < v.edgeCount; ++i) {
            newEdges[i] = v.edges[i];
        }
        
        delete[] v.edges;
        v.edges = newEdges;
        v.capacity = newCapacity;
    }
    
    // ADD NEW EDGE
    v.edges[v.edgeCount++] = Edge(to, weight);
}

void UndirectedGraph::addEdge(int from, int to, float weight) {
    
    // Add edge in both directions by calling the base class implementation
    int fromIndex = findVertexIndex(from);
    int toIndex = findVertexIndex(to);
    
    if (fromIndex == -1 || toIndex == -1) {
        std::cout << "One or both vertices not found!" << std::endl;
        return;
    }
    
    // Add edge from -> to
    Vertex& v1 = vertices[fromIndex];
    if (v1.edgeCount >= v1.capacity) {
        int newCapacity = v1.capacity == 0 ? 1 : v1.capacity * 2;
        Edge* newEdges = new Edge[newCapacity];
        for (int i = 0; i < v1.edgeCount; ++i) {
            newEdges[i] = v1.edges[i];
        }
        delete[] v1.edges;
        v1.edges = newEdges;
        v1.capacity = newCapacity;
    }
    v1.edges[v1.edgeCount++] = Edge(to, weight);
    
    // Add edge to -> from
    Vertex& v2 = vertices[toIndex];
    if (v2.edgeCount >= v2.capacity) {
        int newCapacity = v2.capacity == 0 ? 1 : v2.capacity * 2;
        Edge* newEdges = new Edge[newCapacity];
        for (int i = 0; i < v2.edgeCount; ++i) {
            newEdges[i] = v2.edges[i];
        }
        delete[] v2.edges;
        v2.edges = newEdges;
        v2.capacity = newCapacity;
    }
    v2.edges[v2.edgeCount++] = Edge(from, weight);
} 