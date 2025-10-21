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

int main() {
    Graph G(4);
    GRAPHinsertArc(G, 0, 1);
    GRAPHinsertArc(G, 0, 2);
    GRAPHinsertArc(G, 2, 1);
    GRAPHinsertArc(G, 3, 1);
    GRAPHshow(G);
    return 0;
}
