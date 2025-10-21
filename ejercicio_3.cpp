// ejercicio3.cpp
#include "graph.h"


bool GRAPHareAdjacent(Graph &G, vert v, vert w) {
    for (auto neighbor : G.adj[v]) {
        if (neighbor == w) {
            return true;
        }
    }
    return false;
}

int main() {
    cout << "--- Prueba Ejercicio 3 (GRAPHareAdjacent) ---" << endl;
    Graph G(4);

    GRAPHinsertArc(G, 0, 1);
    GRAPHinsertArc(G, 0, 2);
    GRAPHinsertArc(G, 2, 3);
    
    cout << "Grafo de prueba (Arcos: 0->1, 0->2, 2->3)" << endl;

    cout << "\nResultados de las pruebas:" << endl;
    
    cout << "Arco 0->1 existe? " 
         << (GRAPHareAdjacent(G, 0, 1) ? "SI" : "NO") 
         << " (Esperado: SI)" << endl;
         
    cout << "Arco 2->3 existe? " 
         << (GRAPHareAdjacent(G, 2, 3) ? "SI" : "NO") 
         << " (Esperado: SI)" << endl;

    cout << "Arco 1->0 existe? " 
         << (GRAPHareAdjacent(G, 1, 0) ? "SI" : "NO") 
         << " (Esperado: NO)" << endl;
         
    cout << "Arco 0->3 existe? " 
         << (GRAPHareAdjacent(G, 0, 3) ? "SI" : "NO") 
         << " (Esperado: NO)" << endl;

    return 0;
}