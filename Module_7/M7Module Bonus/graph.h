#ifndef GRAPH_H
#define GRAPH_H

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

/*
   Graph.h for an NC Landmarks Program
   ------------------------------------
   In this version, vertices represent notable North Carolina landmarks,
   and edges represent distances (in miles) between them.
*/

class Vertex {
public:
   std::string label; // Landmark name
   static inline int s_instCount = 0;
   
   Vertex(const std::string& vertexLabel) {
      label = vertexLabel;
   }
};

class Edge {
public:
   Vertex* fromVertex;
   Vertex* toVertex;
   double weight; // Represents distance in miles between landmarks
    
   Edge(Vertex* from, Vertex* to, double edgeWeight) {
      fromVertex = from;
      toVertex = to;
      weight = edgeWeight;
   }
};

class Graph {
private:
   // Maps a vertex to a list of all edges that start from that vertex.
   std::unordered_map<Vertex*, std::vector<Edge*>*> fromEdges;
    
   // Maps a vertex to a list of all edges that go to that vertex.
   std::unordered_map<Vertex*, std::vector<Edge*>*> toEdges;

public:    
   virtual ~Graph() {
      // Gather distinct vertices and edges for proper deallocation.
      std::unordered_set<Vertex*> distinctVertices;
      std::unordered_set<Edge*> distinctEdges;
      
      for (auto& keyValue : fromEdges) {
         distinctVertices.insert(keyValue.first);
         for (Edge* edge : *keyValue.second) {
            distinctEdges.insert(edge);
         }
      }
      for (auto& keyValue : toEdges) {
         distinctVertices.insert(keyValue.first);
         for (Edge* edge : *keyValue.second) {
            distinctEdges.insert(edge);
         }
      }
      
      // Clear each map
      fromEdges.clear();
      toEdges.clear();
      
      // Delete each edge and vertex
      for (Edge* edge : distinctEdges) {
         delete edge;
      }
      for (Vertex* vertex : distinctVertices) {
         delete vertex;
      }
   }
    
   Vertex* AddVertex(const std::string& newVertexLabel) {
      // Create a new Vertex with the provided landmark name.
      Vertex* newVertex = new Vertex(newVertexLabel);
      fromEdges[newVertex] = new std::vector<Edge*>();
      toEdges[newVertex] = new std::vector<Edge*>();
      return newVertex;
   }
    
   Edge* AddDirectedEdge(Vertex* fromVertex, Vertex* toVertex, double weight = 1.0) {
      // Avoid adding duplicate edges.
      if (HasEdge(fromVertex, toVertex)) {
         return nullptr;
      }
        
      // Create the directed edge representing the distance in miles.
      Edge* newEdge = new Edge(fromVertex, toVertex, weight);
      fromEdges[fromVertex]->push_back(newEdge);
      toEdges[toVertex]->push_back(newEdge);
      return newEdge;
   }
    
   std::pair<Edge*, Edge*> AddUndirectedEdge(Vertex* vertexA, Vertex* vertexB, double weight = 1.0) {
      return std::pair<Edge*, Edge*>(
         AddDirectedEdge(vertexA, vertexB, weight),
         AddDirectedEdge(vertexB, vertexA, weight)
      );
   }
    
   // Returns an unordered_set of all edges in this graph.
   std::unordered_set<Edge*> GetEdges() const {
      std::unordered_set<Edge*> edgesSet;
      for (auto& keyValue : fromEdges) {
         std::vector<Edge*>* edges = keyValue.second;
         for (Edge* edge : *edges) {
            edgesSet.insert(edge);
         }
      }
      return edgesSet;
   }
    
   // Returns the vector of edges originating from the specified vertex.
   const std::vector<Edge*>* GetEdgesFrom(Vertex* fromVertex) const {
      return fromEdges.at(fromVertex);
   }
    
   // Returns the vector of edges arriving at the specified vertex.
   const std::vector<Edge*>* GetEdgesTo(Vertex* toVertex) const {
      return toEdges.at(toVertex);
   }
    
   // Returns a vertex with the matching landmark name or nullptr if none is found.
   Vertex* GetVertex(const std::string& vertexLabel) {
      for (auto& keyValue : fromEdges) {
         Vertex* vertex = keyValue.first;
         if (vertex->label == vertexLabel) {
            return vertex;
         }
      }
      return nullptr;
   }
    
   // Returns a vector of all vertices (landmarks) in the graph.
   std::vector<Vertex*> GetVertices() const {
      std::vector<Vertex*> vertices;
      for (auto& keyValue : fromEdges) {
         vertices.push_back(keyValue.first);
      }
      return vertices;
   }
    
   // Checks if an edge from fromVertex to toVertex already exists.
   bool HasEdge(Vertex* fromVertex, Vertex* toVertex) const {
      if (fromEdges.count(fromVertex) == 0) {
         return false;
      }
      std::vector<Edge*>& edges = *fromEdges.at(fromVertex);
      for (Edge* edge : edges) {
         if (edge->toVertex == toVertex) {
            return true;
         }
      }
      return false;
   }
};

#endif
