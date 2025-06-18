#include "derived_graphs.h"
#include <iostream>

int main() {

    // CREATE ARRAY OF GRAPHS
    const int numGraphs = 2;
    Graph** graphs = new Graph*[numGraphs];
    
    // INITIALIZE GRAPHS
    graphs[0] = new DirectedGraph();
    graphs[1] = new UndirectedGraph();
    
    // ADD VERTICES TO BOTH GRAPHS
    for (int i = 1; i <= 5; ++i) {
        graphs[0]->addVertex(i);
        graphs[1]->addVertex(i);
    }
    
    // ADD EDGES TO DIRECTED GRAPH
    std::cout << "\nDIRECTED GRAPH: " << std::endl;
    graphs[0]->addEdge(1, 2, 1.0f);
    graphs[0]->addEdge(2, 3, 2.0f);
    graphs[0]->addEdge(3, 4, 3.0f);
    graphs[0]->addEdge(4, 5, 4.0f);
    graphs[0]->addEdge(5, 1, 5.0f);
    graphs[0]->printGraph();
    
    std::cout << "\n UNDIRECTED GRAPH:" << std::endl;
    
    // ADD EDGES TO UNDIRECTED GRAPH
    graphs[1]->addEdge(1, 2, 1.0f);
    graphs[1]->addEdge(2, 3, 2.0f);
    graphs[1]->addEdge(3, 4, 3.0f);
    graphs[1]->addEdge(4, 5, 4.0f);
    graphs[1]->addEdge(5, 1, 5.0f);
    graphs[1]->printGraph();
    
    // DEMONSTRATE VERTEX REMOVAL
    std::cout << "\nAFTER REMOVING VERTEX 3 FROM BOTH GRAPHS:" << std::endl;
    graphs[0]->removeVertex(3);
    graphs[1]->removeVertex(3);
    
    std::cout << "\nDIRECTED GRAPH:" << std::endl;
    graphs[0]->printGraph();
    
    std::cout << "\nUNDIRECTED GRAPH:" << std::endl;
    graphs[1]->printGraph();
    
    // CLEANUP MEMORY AFTER USE
    for (int i = 0; i < numGraphs; ++i) {
        delete graphs[i];
    }
    delete[] graphs;
    
    return 0;
} 