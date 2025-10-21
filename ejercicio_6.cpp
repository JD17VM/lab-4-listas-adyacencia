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

void GRAPHremoveArc(Graph &G, vert v, vert w) {
    for (auto it = G.adj[v].begin(); it != G.adj[v].end(); ++it) {
        if (*it == w) {
            G.adj[v].erase(it);
            G.A--;
            return;
        }
    }
}

int main() {
    Graph G(4);
    GRAPHinsertArc(G, 0, 1);
    GRAPHinsertArc(G, 0, 2);
    GRAPHinsertArc(G, 2, 1);
    GRAPHinsertArc(G, 3, 1);
    GRAPHremoveArc(G, 2, 1); 
    GRAPHshow(G);
    return 0;
}
