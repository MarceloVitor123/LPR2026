#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> numerosInt(5);
    int maior, posicao = 0;

    cout << "Digite 5 números inteiros: " << endl;

    for(int i = 0; i < 5; i++){
        cin >> numerosInt[i];

}
    for(int i = 0; i < 5; i++){
        if(maior < numerosInt[i]){
            maior = numerosInt[i];
            posicao = i;
        }
        cout << "Números digitados: " << numerosInt[i] << endl;
    }
    cout << "Maior valor: " << maior << endl;
    cout << "Posição: " << posicao << endl;
}