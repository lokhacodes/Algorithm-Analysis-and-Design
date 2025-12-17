# Algorithm Analysis and Design Lab

This repository contains implementations of various algorithms in C as part of the Algorithm Analysis and Design lab work. The lab covers fundamental graph algorithms and sorting algorithms, demonstrating their implementation, analysis, and application.

## Overview

The lab is organized into folders, each focusing on a specific algorithm or set of related algorithms. Each folder typically includes:
- `code.c`: The C implementation of the algorithm.
- `image.png`: A diagram or illustration related to the algorithm.
- `readme.md`: Brief notes or additional information (may be minimal in some cases).

## Algorithms Covered

### Graph Algorithms
1. **BFS (Breadth-First Search)**
   - Implements BFS traversal on an undirected graph.
   - Calculates distances from a starting vertex to all reachable nodes.

2. **DFS (Depth-First Search)**
   - Implements DFS traversal on an undirected graph.
   - Prints the traversal path and visited edges.

3. **Floyd-Warshall Algorithm**
   - Computes all-pairs shortest paths in a weighted graph.
   - Handles graphs with positive or negative edge weights (no negative cycles).

4. **Graph Types**
   - Implementations for directed, undirected, and weighted graphs.

### Sorting Algorithms
1. **Bubble Sort, Selection Sort, and Insertion Sort**
   - Implementations of three basic sorting algorithms.
   - Bubble sort: Repeatedly swaps adjacent elements if they are in wrong order.
   - Selection sort: Finds the minimum element and places it at the beginning.
   - Insertion sort: Builds the sorted array one item at a time.

2. **Heap Sort**
   - Implements heap sort using a max-heap.
   - Builds a heap and repeatedly extracts the maximum element.

3. **Quick Sort**
   - Implements quick sort with partitioning.
   - Uses a pivot element to partition the array.

## Prerequisites

- A C compiler (e.g., GCC) installed on your system.
- Basic knowledge of C programming and algorithms.

## How to Run

1. Navigate to the desired algorithm's folder.
2. Compile the C code using a compiler like GCC:
   ```
   gcc code.c -o output
   ```
3. Run the executable:
   ```
   ./output
   ```
4. Follow the on-screen prompts to input data (e.g., number of vertices/edges for graphs, array elements for sorting).

## Learning Objectives

- Understand the implementation details of fundamental algorithms.
- Analyze time and space complexity of different algorithms.
- Compare the performance and applicability of various sorting and graph traversal techniques.
- Gain hands-on experience in coding algorithms in C.

## Notes

- All implementations are in C and use standard input/output for user interaction.
- Graph algorithms assume 1-based indexing for vertices.
- Sorting algorithms work with integer arrays.
- Some folders may have additional notes in their respective `readme.md` files.

For any questions or clarifications, refer to the individual algorithm implementations or consult with your lab instructor.
