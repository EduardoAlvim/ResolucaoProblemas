#include <iostream>

using namespace std;

int main()
{
    int M, N;
    int notas[]= {100, 50, 20, 10, 5, 2};
    cin >> M;
    cin >> N;

    while(M != 0 && N != 0)
    {
        int troco;
        int aux=0;
        troco = N - M;
        for(int i=0; i<6; i++)
        {
            if(troco >= notas[i])
            {
                troco = troco - notas[i];
                aux++;
            }
        }
        if(aux == 2)
            cout << "possible" << endl;
        else
            cout << "impossible" << endl;
        cin >> M;
        cin >> N;
    }
    return 0;
}
