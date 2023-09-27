#include <iostream>

using namespace std;

int main()
{
    int correto, respostas[5], retorno=0;
    cin >> correto;
    for(int i=0;i<5;i++){
        cin >> respostas[i];
        if(respostas[i] == correto){
            retorno++;
        }
    }
    cout <<retorno<< endl;
    return 0;
}
