#include <iostream>
#include <array>

using namespace std;

struct Produto{
    string Nome;
    int Codigo;
    double Preco;
    int Quantidade;
};

int main(){
    array<Produto,3>item;
    double total;

    cout << "Qual é o nome do primeiro produto?" << endl;
    cin >> item[0].Nome;
    cout << "Qual é o código do primeiro produto?" << endl;
    cin >> item[0].Codigo;
    cout << "Qual é o preço do primeiro produto?" << endl;
    cin >> item[0].Preco;
    cout << "Qual é a quantidade do primeiro produto?" << endl;
    cin >> item[0].Quantidade;

    cout << "Qual é o nome do segundo produto?" << endl;
    cin >> item[1].Nome;
    cout << "Qual é o código do segundo produto?" << endl;
    cin >> item[1].Codigo;
    cout << "Qual é o preço do segundo produto?" << endl;
    cin >> item[1].Preco;
    cout << "Qual é a quantidade do segundo produto?" << endl;
    cin >> item[1].Quantidade;

    cout << "Qual é o nome do terceiro produto?" << endl;
    cin >> item[2].Nome;
    cout << "Qual é o código do terceiro produto?" << endl;
    cin >> item[2].Codigo;
    cout << "Qual é o preço do terceiro produto?" << endl;
    cin >> item[2].Preco;
    cout << "Qual é a quantidade do terceiro produto?" << endl;
    cin >> item[2].Quantidade;

    for(Produto produto : item){
        total += produto.Preco * produto.Quantidade;

    }
    cout << "O valor total de estoque é: " << total << endl;
}