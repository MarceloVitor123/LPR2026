#include <iostream>
#include <list>

using namespace std;

int main(){

    double media;
    double maior = 0, menor = 9999;
    int n = 0;
    int soma = 0;

    list<int> notas;

    for(int i = 0; i < 5; i++){
        cout << "Digite a nota do aluno: " << endl;
        cin >> n;
        notas.push_back(n);
    }

    cout << "Notas cadastradas: " << endl;
    for(int nota : notas){
        cout << nota << "" << endl;
        if(nota > maior){
            maior = nota;
        }
        if(nota < menor){
            menor = nota;
        }
        soma += nota;
    }
    media = soma / 5.0;

    cout << "A maior nota foi: " << maior << endl << "A menor nota foi: " << menor << endl << "E a media foi: " << media << endl;
}
