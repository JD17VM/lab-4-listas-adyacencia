#include "graph.h"

void GRAPHshow(Graph &G) {
    cout << "Grafo (V=" << G.V << ", A=" << G.A << "):" << endl;
    for (int v = 0; v < G.V; v++) {
        cout << "  " << v << ": ";
        for (auto w : G.adj[v])
            cout << w << " ";
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

void UGRAPHremoveEdge(Graph &G, vert v, vert w) {
    GRAPHremoveArc(G, v, w);
    GRAPHremoveArc(G, w, v);
}

int main() {
    cout << "--- Prueba Ejercicio 9 (UGRAPHremoveEdge) ---" << endl;
    Graph G(4);

    GRAPHinsertArc(G, 0, 1); GRAPHinsertArc(G, 1, 0);
    GRAPHinsertArc(G, 1, 2); GRAPHinsertArc(G, 2, 1);
    GRAPHinsertArc(G, 0, 2); GRAPHinsertArc(G, 2, 0);

    cout << "Grafo inicial (aristas 0-1, 1-2, 0-2):" << endl;
    GRAPHshow(G);
    
    cout << "\nEliminando arista 1-2..." << endl;
    UGRAPHremoveEdge(G, 1, 2);
    
    cout << "Grafo despues de eliminar 1-2:" << endl;
    GRAPHshow(G);

    cout << "\nEliminando arista 0-1..." << endl;
    UGRAPHremoveEdge(G, 0, 1);

    cout << "Grafo despues de eliminar 0-1:" << endl;
    GRAPHshow(G);

    return 0;
}