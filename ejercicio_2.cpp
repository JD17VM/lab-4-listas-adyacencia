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

int GRAPHoutdeg(Graph &G, vert v) {
    return G.adj[v].size();
}

int GRAPHindeg(Graph &G, vert v) {
    int count = 0;
    for (int u = 0; u < G.V; u++) {
        for (auto w : G.adj[u]) {
            if (w == v) count++;
        }
    }
    return count;
}

int main() {
    Graph G(4);
    GRAPHinsertArc(G, 0, 1);
    GRAPHinsertArc(G, 0, 2);
    GRAPHinsertArc(G, 2, 1);
    GRAPHinsertArc(G, 3, 1);
    cout << "Outdeg(0) = " << GRAPHoutdeg(G, 0) << endl; 
    cout << "Indeg(1) = " << GRAPHindeg(G, 1) << endl;  
    return 0;
}
