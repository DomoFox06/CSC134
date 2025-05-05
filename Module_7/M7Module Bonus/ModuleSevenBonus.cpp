/*
Domonic Yarnall
CSC 134
M7 Bonus (NC Landmarks)
5/5/25
*/

#include <iostream>
#include "graph.h"
// you should replace the above line with 
// #include "StringGraph.h"
// if you wish to use graphs with string data

using namespace std;

int main() {
   // Create a new Graph object
   Graph graph1;

   // Add vertices representing NC landmarks
   Vertex* vertexA = graph1.AddVertex("Biltmore Estate");
   Vertex* vertexB = graph1.AddVertex("Wright Brothers National Memorial");
   Vertex* vertexC = graph1.AddVertex("Blue Ridge Parkway");
   Vertex* vertexD = graph1.AddVertex("Cape Hatteras Lighthouse");

   // Add undirected edges with approximate distances in miles between the landmarks
   graph1.AddUndirectedEdge(vertexA, vertexB, 300); // Biltmore Estate to Wright Brothers National Memorial: 300 miles
   graph1.AddUndirectedEdge(vertexA, vertexC, 40);  // Biltmore Estate to Blue Ridge Parkway: 40 miles
   graph1.AddUndirectedEdge(vertexA, vertexD, 250); // Biltmore Estate to Cape Hatteras Lighthouse: 250 miles
   graph1.AddUndirectedEdge(vertexB, vertexC, 280); // Wright Brothers National Memorial to Blue Ridge Parkway: 280 miles
   graph1.AddUndirectedEdge(vertexB, vertexD, 50);  // Wright Brothers National Memorial to Cape Hatteras Lighthouse: 50 miles
   graph1.AddUndirectedEdge(vertexC, vertexD, 260); // Blue Ridge Parkway to Cape Hatteras Lighthouse: 260 miles

   // Display the graph's vertices and edges
   for (Vertex* vertex : graph1.GetVertices()) {
      cout << "Location: " << vertex->label << endl;
      
      // Show outgoing connections (departures)
      cout << "  Departures from " << vertex->label << ":" << endl;
      for (Edge* outgoingEdge : *graph1.GetEdgesFrom(vertex)) {
         cout << "   - from " << vertex->label << " to ";
         cout << outgoingEdge->toVertex->label << ", ";
         cout << (int)outgoingEdge->weight << " miles" << endl;
      }
      
      // Show incoming connections (arrivals)
      cout << "  Arrivals to " << vertex->label << ":" << endl;
      for (Edge* incomingEdge : *graph1.GetEdgesTo(vertex)) {
         cout << "   - from " << incomingEdge->fromVertex->label << " to ";
         cout << vertex->label << ", ";
         cout << (int)incomingEdge->weight << " miles" << endl;
      }
   }

   return 0;
}
