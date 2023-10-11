#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string jogador1, jogador2;
        cin >> jogador1 >> jogador2;

        if (jogador1 == "ataque" && jogador2 == "pedra")
        {
            cout << "Jogador 1 venceu" << endl;
        }
        else if (jogador2 == "ataque" && jogador1 == "pedra")
        {
            cout << "Jogador 2 venceu" << endl;
        }
        else if (jogador1 == "pedra" && jogador2 == "papel")
        {
            cout << "Jogador 1 venceu" << endl;
        }
        else if (jogador2 == "pedra" && jogador1 == "papel")
        {
            cout << "Jogador 2 venceu" << endl;
        }
        else if (jogador1 == "papel" && jogador2 == "ataque")
        {
            cout << "Jogador 2 venceu" << endl;
        }
        else if (jogador2 == "papel" && jogador1 == "ataque")
        {
            cout << "Jogador 1 venceu" << endl;
        }
        else if (jogador1 == "papel" && jogador2 == "papel")
        {
            cout << "Ambos venceram" << endl;
        }
        else if (jogador1 == "pedra" && jogador2 == "pedra")
        {
            cout << "Sem ganhador" << endl;
        }
        else if (jogador1 == "ataque" && jogador2 == "ataque")
        {
            cout << "Aniquilacao mutua" << endl;
        }
        else
        {
            cout << "Ambos venceram" << endl;
        }
    }

    return 0;
}
