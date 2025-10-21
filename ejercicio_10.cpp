#include "graph.h"

void UGRAPHinsertEdge(Graph &G, vert v, vert w) {
    GRAPHinsertArc(G, v, w);
    GRAPHinsertArc(G, w, v);
}

int UGRAPHdegrees(Graph &G) {
    int maxdeg = 0;
    for (int v = 0; v < G.V; v++) {
        int d = G.adj[v].size();
        if (d > maxdeg) maxdeg = d;
    }
    return maxdeg;
}

int main() {
    Graph G(5);
    UGRAPHinsertEdge(G, 0, 1);
    UGRAPHinsertEdge(G, 0, 2);
    UGRAPHinsertEdge(G, 1, 2);
    UGRAPHinsertEdge(G, 1, 3);
    UGRAPHinsertEdge(G, 1, 4);
    cout << "El grado maximo del grafo es: " << UGRAPHdegrees(G) << endl;
    return 0;
}
