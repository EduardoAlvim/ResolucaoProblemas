#include <bits/stdc++.h>
using namespace std;

class Grafo
{
    int V; // número de vértices
    list<int> *adj; // ponteiro para um array contendo as listas de adjacências

public:
    Grafo(int V); // construtor
    void adicionarAresta(int v1, int v2); // adiciona uma aresta no grafo

    // faz uma DFS a partir de um vértice
    void dfs(int v);
};

Grafo::Grafo(int V)
{
    this->V = V; // atribui o número de vértices
    adj = new list<int>[V]; // cria as listas
}

void Grafo::adicionarAresta(int v1, int v2)
{
    // adiciona vértice v2 à lista de vértices adjacentes de v1
    adj[v1].push_back(v2);
}

void Grafo::dfs(int v)
{
    stack<int> pilha;
    bool visitados[V]; // vetor de visitados

    // marca todos como não visitados
    for(int i = 0; i < V; i++)
        visitados[i] = false;

    while(true)
    {
        if(!visitados[v])
        {
            //cout << "Visitando vertice " << v << " ...\n";
            visitados[v] = true; // marca como visitado
            pilha.push(v); // insere "v" na pilha
        }

        bool achou = false;
        list<int>::iterator it;

        // busca por um vizinho não visitado
        for(it = adj[v].begin(); it != adj[v].end(); it++)
        {
            if(!visitados[*it])
            {
                achou = true;
                break;
            }
        }

        if(achou)
            v = *it; // atualiza o "v"
        else
        {
            // se todos os vizinhos estão visitados ou não existem vizinhos
            // remove da pilha
            pilha.pop();
            // se a pilha ficar vazia, então terminou a busca
            if(pilha.empty())
                break;
            // se chegou aqui, é porque pode pegar elemento do topo
            v = pilha.top();
        }
    }
    int G;
    for(int i = 0; i < V; i++)
    {
        if(visitados[i] == false)
        {
            G = 0;
            printf("%d\n",G);
            break;
        }
    }
    G=1;
    printf("%d\n",G);
}

int main()
{
    int Ve=1, A=1;

    while(Ve != 0 && A !=0)
    {
        cin >> Ve;
        Grafo grafo(Ve);

        cin >> A;

        for(int i=0; i<A; i++)
        {
            int V, W, P;
            cin >> V;
            cin >> W;
            cin >> P;
            if(P == 1)
            {
                grafo.adicionarAresta(V-1, W-1);
            }
            else if(P == 2)
            {
                grafo.adicionarAresta(V-1, W-1);
                grafo.adicionarAresta(W-1, V-1);
            }
        }
        for(int i=0; i<Ve; i++)
        {
            grafo.dfs(i);
        }
    }

    return 0;
}
