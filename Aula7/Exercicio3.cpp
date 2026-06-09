#include <iostream>
#include <vector>

using namespace std;

int main(){

    int numero;

    vector<int> numeros(10);

    cout << "Digite 10 números inteiros: ";

    for(int i = 0; i < 10; i++)
    {
        cin >> numeros[i];
    }

    cout << "Digite o número para pesquisar no vetor: ";
    cin >> numero;

    for(int num : numeros)
    {
        if(num == numero){
            cout << "O número foi achado na posição: ";

        }
        else{
            cout << "O número não foi encontrado ";
        }
    }

}
    