#include "graph.h"

void GRAPHshow(Graph &G) {
    for (int v = 0; v < G.V; v++) {
        cout << "v("<< v << ") : ";
        for (auto w : G.adj[v]) {
            cout << w << " ";
        }
        cout << endl;
    }
}

void UGRAPHinsertEdge(Graph &G, vert v, vert w) {
    GRAPHinsertArc(G, v, w);  
    GRAPHinsertArc(G, w, v); 
}

S
