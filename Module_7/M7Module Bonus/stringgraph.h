#ifndef STRINGGRAPH_H
#define STRINGGRAPH_H

// StringGraph.h
// A variant of Graph.h that uses string-based weights to describe connections.
// This version is ready to support notable landmarks in North Carolina.

#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

class Vertex {
public:
    std::string label;
    static inline int s_instCount = 0;
    
    Vertex(const std::string& vertexLabel) : label(vertexLabel) { }
};

class Edge {
public:
    Vertex* fromVertex;
    Vertex* toVertex;
    std::string weight; // Descriptive label for the connection
    
    Edge(Vertex* from, Vertex* to, const std::string& edgeWeight)
        : fromVertex(from), toVertex(to), weight(edgeWeight) { }
};

class Graph {
private:
    // Maps a vertex to a vector of all edges that originate from that vertex.
    std::unordered_map<Vertex*, std::vector<Edge*>*> fromEdges;
    
    // Maps a vertex to a vector of all edges that arrive at that vertex.
    std::unordered_map<Vertex*, std::vector<Edge*>*> toEdges;

public:
    virtual ~Graph() {
        // Collect distinct vertices and edges to free memory appropriately.
        std::unordered_set<Vertex*> distinctVertices;
        std::unordered_set<Edge*> distinctEdges;
        for (auto& pair : fromEdges) {
            distinctVertices.insert(pair.first);
            for (Edge* edge : *pair.second) {
                distinctEdges.insert(edge);
            }
        }
        for (auto& pair : toEdges) {
            distinctVertices.insert(pair.first);
            for (Edge* edge : *pair.second) {
                distinctEdges.insert(edge);
            }
        }
        
        // Clear the maps.
        fromEdges.clear();
        toEdges.clear();
        
        // Delete each edge and vertex.
        for (Edge* edge : distinctEdges) {
            delete edge;
        }
        for (Vertex* vertex : distinctVertices) {
            delete vertex;
        }
    }
    
    Vertex* AddVertex(const std::string& newVertexLabel) {
        Vertex* newVertex = new Vertex(newVertexLabel);
        // Ensure every vertex exists as a key in both maps.
        fromEdges[newVertex] = new std::vector<Edge*>();
        toEdges[newVertex] = new std::vector<Edge*>();
        return newVertex;
    }
    
    Edge* AddDirectedEdge(Vertex* fromVertex, Vertex* toVertex, 
                           std::string weight = "is connected to") {
        // Avoid duplicate edges.
        if (HasEdge(fromVertex, toVertex)) {
            return nullptr;
        }
        
        Edge* newEdge = new Edge(fromVertex, toVertex, weight);
        fromEdges[fromVertex]->push_back(newEdge);
        toEdges[toVertex]->push_back(newEdge);
        return newEdge;
    }
    
    std::pair<Edge*, Edge*> AddUndirectedEdge(Vertex* vertexA, Vertex* vertexB,
                                              std::string weight = "is connected to") {
        return std::pair<Edge*, Edge*>(
            AddDirectedEdge(vertexA, vertexB, weight),
            AddDirectedEdge(vertexB, vertexA, weight)
        );
    }
    
    // Returns an unordered_set of all of the graph's edges.
    std::unordered_set<Edge*> GetEdges() const {
        std::unordered_set<Edge*> edgesSet;
        for (auto& pair : fromEdges) {
            for (Edge* edge : *pair.second) {
                edgesSet.insert(edge);
            }
        }
        return edgesSet;
    }
    
    // Returns the vector of edges that originate from the given vertex.
    const std::vector<Edge*>* GetEdgesFrom(Vertex* fromVertex) const {
        return fromEdges.at(fromVertex);
    }
    
    // Returns the vector of edges that arrive at the given vertex.
    const std::vector<Edge*>* GetEdgesTo(Vertex* toVertex) const {
        return toEdges.at(toVertex);
    }
    
    // Returns a vertex with a matching label, or nullptr if not found.
    Vertex* GetVertex(const std::string& vertexLabel) {
        for (auto& pair : fromEdges) {
            if (pair.first->label == vertexLabel) {
                return pair.first;
            }
        }
        return nullptr;
    }
    
    // Returns a vector of all vertices in the graph.
    std::vector<Vertex*> GetVertices() const {
        std::vector<Vertex*> vertices;
        for (auto& pair : fromEdges) {
            vertices.push_back(pair.first);
        }
        return vertices;
    }
    
    // Checks if an edge from one vertex to another already exists.
    bool HasEdge(Vertex* fromVertex, Vertex* toVertex) const {
        if (fromEdges.count(fromVertex) == 0) {
            return false;
        }
        const std::vector<Edge*>& edges = *fromEdges.at(fromVertex);
        for (Edge* edge : edges) {
            if (edge->toVertex == toVertex) {
                return true;
            }
        }
        return false;
    }
};

#endif // STRINGGRAPH_H
