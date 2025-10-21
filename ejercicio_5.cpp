#include "graph.h"

void GRAPHshow(Graph &G) {
    cout << "Mostrando Grafo (V=" << G.V << ", A=" << G.A << ")" << endl;
    for (int v = 0; v < G.V; v++) {
        cout << "  " << v << ": ";
        for (auto w : G.adj[v])
            cout << w << " ";
        cout << endl;
    }
}

void GRAPHdestroy(Graph &G) {
    for (int v = 0; v < G.V; v++)
        G.adj[v].clear();

    G.adj.clear();
    
    G.A = 0;
    G.V = 0;
}

int main() {
    cout << "--- Prueba Ejercicio 5 (GRAPHdestroy) ---" << endl;
    Graph G(4);
    GRAPHinsertArc(G, 0, 1);
    GRAPHinsertArc(G, 1, 2);
    GRAPHinsertArc(G, 2, 3);
    GRAPHinsertArc(G, 0, 3);

    cout << "Grafo antes de destruir:" << endl;
    GRAPHshow(G);

    GRAPHdestroy(G);

    cout << "\nGrafo despues de destruir:" << endl;
    
    cout << "Vertices: " << G.V << " (Esperado: 0)" << endl;
    cout << "Arcos: " << G.A << " (Esperado: 0)" << endl;
    cout << "Tamano del vector adj: " << G.adj.size() << " (Esperado: 0)" << endl;

    return 0;
}