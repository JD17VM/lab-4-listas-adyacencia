#include "graph.h"

bool GRAPHareAdjacent(Graph &G, vert v, vert w) {
    for (auto neighbor : G.adj[v]) {
        if (neighbor == w) {
            return true;
        }
    }
    return false;
}

bool GRAPHundir(Graph &G) {
    for (int v = 0; v < G.V; v++) {
        for (vert w : G.adj[v]) {
            
            if (!GRAPHareAdjacent(G, w, v)) {
                return false;
            }
        }
    }
    
    return true;
}

int main() {
    cout << "--- Prueba Ejercicio 7 (GRAPHundir) ---" << endl;

    Graph G1(3);
    GRAPHinsertArc(G1, 0, 1); GRAPHinsertArc(G1, 1, 0);
    GRAPHinsertArc(G1, 1, 2); GRAPHinsertArc(G1, 2, 1);
    
    cout << "G1 (aristas 0-1, 1-2):" << endl;
    cout << "Es no dirigido? " << (GRAPHundir(G1) ? "SI" : "NO") 
         << " (Esperado: SI)" << endl;

    Graph G2(3);
    GRAPHinsertArc(G2, 0, 1); GRAPHinsertArc(G2, 1, 0);
    GRAPHinsertArc(G2, 1, 2); 
    
    cout << "\nG2 (arista 0-1, arco 1->2):" << endl;
    cout << "Es no dirigido? " << (GRAPHundir(G2) ? "SI" : "NO") 
         << " (Esperado: NO)" << endl;
         
    return 0;
}