#include "graph.h"
#include <algorithm>

Graph::Graph() : vertices(nullptr), vertexCount(0), capacity(0) {}

Graph::~Graph() {
    delete[] vertices;
}

void Graph::resizeVertices(int newCapacity) {
    Vertex* newVertices = new Vertex[newCapacity];
    
    // COPY EXISTING VERTICES
       for (int i = 0; i < vertexCount; ++i) {
        newVertices[i] = vertices[i];
    }
    
    delete[] vertices;
    vertices = newVertices;
    capacity = newCapacity;
}

int Graph::findVertexIndex(int id) const {
    for (int i = 0; i < vertexCount; ++i) {
        if (vertices[i].id == id) {
            return i;
        }
    }
    return -1;
}

void Graph::addVertex(int id) {

    // CHECK IF VERTEX ALREADY EXISTS
    if (findVertexIndex(id) != -1) {
        std::cout << "Vertex " << id << " already exists!" << std::endl;
        return;
    }
    
    // RESIZE IF NECESSARY
    if (vertexCount >= capacity) {
        resizeVertices(capacity == 0 ? 1 : capacity * 2);
    }
    
    //ADD NEW VERTEX
       vertices[vertexCount++] = Vertex(id);
}

void Graph::removeVertex(int id) {
    int index = findVertexIndex(id);
    if (index == -1) {
        std::cout << "Vertex " << id << " not found!" << std::endl;
        return;
    }
    
    // REMOVE ALL EDGES POINTING TO THIS VERTEX
    for (int i = 0; i < vertexCount; ++i) {
        if (i != index) {
            Vertex& v = vertices[i];
            int writePos = 0;
            
            for (int j = 0; j < v.edgeCount; ++j) {
                if (v.edges[j].to != id) {
                    if (writePos != j) {
                        v.edges[writePos] = v.edges[j];
                    }
                    writePos++;
                }
            }
            v.edgeCount = writePos;
        }
    }
    
    // REMOVE THE VERTEX BY SHIFTING REMAINING VERTICES
    for (int i = index; i < vertexCount - 1; ++i) {
        vertices[i] = vertices[i + 1];
    }
    vertexCount--;
}

void Graph::printGraph() const {
    for (int i = 0; i < vertexCount; ++i) {
        const Vertex& v = vertices[i];
        std::cout << "Vertex " << v.id << " -> ";
        
        if (v.edgeCount == 0) {
            std::cout << "No edges";
        } else {
            for (int j = 0; j < v.edgeCount; ++j) {
                std::cout << v.edges[j].to << "(" << v.edges[j].weight << ")";
                if (j < v.edgeCount - 1) std::cout << ", ";
            }
        }
        std::cout << std::endl;
    }
} 