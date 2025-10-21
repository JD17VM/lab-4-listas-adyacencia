#include <iostream>
#include <vector>
#include <list>
using namespace std;
#define vert int
struct Graph {
    int V;                     
    int A;                     
    vector< list<vert> > adj;
    Graph(int V) {
        this->V = V;
        this->A = 0;
        adj.resize(V);
    }
};

void GRAPHinsertArc(Graph &G, vert v, vert w) {
    for (auto it : G.adj[v])
        if (it == w) return; 
    G.adj[v].push_back(w);
    G.A++;
}