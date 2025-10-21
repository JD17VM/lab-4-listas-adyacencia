#include "graph.h"

int GRAPHoutdeg(Graph &G, vert v) { 
    return G.adj[v].size();
}

int GRAPHindeg(Graph &G, vert v) {
    int count = 0;
    for (int u = 0; u < G.V; u++)
        for (auto w : G.adj[u])
            if (w == v) count++;
    return count;
}
void GRAPHshow(Graph &G) {
    for (int v = 0; v < G.V; v++) {
        cout << v << ": ";
        for (auto w : G.adj[v]) cout << w << " ";
        cout << endl;
    }
}

bool GRAPHisIsolated(Graph &G, vert v) { 
    if (GRAPHoutdeg(G, v) > 0) {
        return false;
    }
    return GRAPHindeg(G, v) == 0;
}

int main() {
    cout << "--- Prueba Ejercicio 1 (GRAPHisIsolated) ---" << endl;
    Graph G(5);
    GRAPHinsertArc(G, 0, 1);
    GRAPHinsertArc(G, 1, 2);
    GRAPHinsertArc(G, 3, 2);
    
    cout << "Grafo de prueba:" << endl;
    GRAPHshow(G);

    cout << "\nResultados:" << endl;
    cout << "Vertice 0 es aislado? " << (GRAPHisIsolated(G, 0) ? "SI" : "NO") << endl;
    cout << "Vertice 2 es aislado? " << (GRAPHisIsolated(G, 2) ? "SI" : "NO") << endl;
    cout << "Vertice 4 es aislado? " << (GRAPHisIsolated(G, 4) ? "SI" : "NO") << endl;

    return 0;
}