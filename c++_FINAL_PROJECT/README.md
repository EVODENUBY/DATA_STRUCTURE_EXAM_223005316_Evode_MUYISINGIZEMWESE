# C++ Graph Implementation

A comprehensive C++ implementation of graph data structures with support for both directed and undirected graphs. This project demonstrates object-oriented programming principles, memory management, and efficient graph operations.

## Features

**Abstract Base Class Design**: Clean inheritance hierarchy with `Graph` as the base class
**Multiple Graph Types**: 

  - Directed Graph (`DirectedGraph`)
  - Undirected Graph (`UndirectedGraph`)

 
 **Dynamic Memory Management**: Efficient dynamic arrays with automatic resizing
**Weighted Edges**: Support for floating-point edge weights
**Vertex Operations**: Add and remove vertices with automatic edge cleanup
**Edge Operations**: Add edges with duplicate detection and weight updates
**Graph Visualization**: Built-in graph printing functionality

## Project Structure

```
C++ EXAM/
├── graph.h              # Abstract base class and data structures
├── graph.cpp            # Base class implementation
├── derived_graphs.h     # Derived graph class declarations
├── derived_graphs.cpp   # Directed and undirected graph implementations
├── main.cpp             # Example usage and demonstration
├── graph_program.exe    # Compiled executable (EXECUTABLE TO RUN THE PROGRAM)
└── README.md           # THIS FILE
```

### Core Data Structures

- **`Edge`**: Represents a connection between vertices with destination and weight
- **`Vertex`**: Represents a node with dynamic edge array and metadata
- **`Graph`**: Abstract base class providing common graph functionality

### Class Hierarchy

```
Graph (Abstract Base)
├── DirectedGraph
└── UndirectedGraph
```

```cpp
#include "derived_graphs.h"

// Create graph instances
DirectedGraph directedGraph;
UndirectedGraph undirectedGraph;

// Add vertices
for (int i = 1; i <= 5; ++i) {
    directedGraph.addVertex(i);
    undirectedGraph.addVertex(i);
}

// Add edges
directedGraph.addEdge(1, 2, 1.0f);
directedGraph.addEdge(2, 3, 2.0f);
undirectedGraph.addEdge(1, 2, 1.0f);
undirectedGraph.addEdge(2, 3, 2.0f);

// Print graphs
directedGraph.printGraph();
undirectedGraph.printGraph();
```

### Vertex and Edge Operations

```cpp
// Remove vertices (automatically removes associated edges)
directedGraph.removeVertex(3);

// Add edges with weights
directedGraph.addEdge(1, 4, 3.5f);
directedGraph.addEdge(4, 5, 2.0f);

// Update existing edge weight
directedGraph.addEdge(1, 2, 5.0f); // Updates weight if edge exists
```

## SAMPLE OUTPUT

When you run the program, you'll see output like: by running
 ##graph_program

```
Directed Graph:
Vertex 1 -> 2(1), 4(3.5)
Vertex 2 -> 3(2)
Vertex 3 -> 4(3)
Vertex 4 -> 5(4), 5(2)
Vertex 5 -> 1(5)

Undirected Graph:
Vertex 1 -> 2(1), 5(5)
Vertex 2 -> 1(1), 3(2)
Vertex 3 -> 2(2), 4(3)
Vertex 4 -> 3(3), 5(4)
Vertex 5 -> 1(5), 4(4)
```

## RUNNING THE PROGRAM  

After compilation, run the executable:

```bash
./graph_program
```

On Windows:
```cmd
graph_program.exe
```
