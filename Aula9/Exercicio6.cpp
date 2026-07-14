#include <iostream>
#include <map>
#include <climits>

using namespace std;

int main(){

    map<string, int> idadeDasPessoas;
    int idade = 0;
    int somaIdades = 0;
    int velha = INT_MIN; 
    int nova = INT_MAX;
    string nome, nomeVelha, nomeNova;

    for(int i = 0; i < 5; i++){
        cout << "Digite o seu nome: " << endl;
        cin >> nome;
        cout << "Digite a sua idade: " << endl;
        cin >> idade;
        idadeDasPessoas[nome] = idade;
        somaIdades += idade;

        cout << "O nome da pessoa: " << nome << " e sua idade: " << idade << endl;

    if(idade > velha){ 
        velha = idade;
        nomeVelha = nome;
    }
    if(idade < nova){
        nova = idade;
        nomeNova = nome;
    }
    }  

    double media = somaIdades / 5;
    cout << "media " << media << endl;

    for(const auto &pessoa : idadeDasPessoas){
    if(pessoa.second > media)
    {
    cout << "Pessoa com idade superior a media: " << pessoa.first  << " e sua respectiva idade: " << pessoa.second << endl;
    }
    }

    cout << "Pessoa mais velha: " << nomeVelha << " e sua idade: " << velha << endl;
    cout << "Pessoa mais nova: " << nomeNova << " e sua idade: " << nova << endl;
}