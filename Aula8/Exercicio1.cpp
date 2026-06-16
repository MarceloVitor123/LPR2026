#include <iostream>
#include <array>

using namespace std;

struct Filme{
    string Titulo;
    string Diretor;
    int AnoLancamento;
    int DuracaoMinutos;
};

int main(){
    int velho = 99999999999;
    string nome;

    array<Filme,3>movie;
    cout << "Qual é o título do primeiro filme?" << endl;
    cin >> movie[0].Titulo;
    cout << "Qual é o diretor do primeiro filme?" << endl;
    cin >> movie[0].Diretor;
    cout << "Qual é o ano de lançamento do primeiro filme?" << endl;
    cin >> movie[0].AnoLancamento;
    cout << "Qual é a duração de minutos do primeiro filme?" << endl;
    cin >> movie[0].DuracaoMinutos;

    cout << "Qual é o título do segundo filme?" << endl;
    cin >> movie[1].Titulo;
    cout << "Qual é o diretor do segundo filme?" << endl;
    cin >> movie[1].Diretor;
    cout << "Qual é o ano de lançamento do segundo filme?" << endl;
    cin >> movie[1].AnoLancamento;
    cout << "Qual é a duração de minutos do segundo filme?" << endl;
    cin >> movie[1].DuracaoMinutos;

    cout << "Qual é o título do terceiro filme?" << endl;
    cin >> movie[2].Titulo;
    cout << "Qual é o diretor do terceiro filme?" << endl;
    cin >> movie[2].Diretor;
    cout << "Qual é o ano de lançamento do terceiro filme?" << endl;
    cin >> movie[2].AnoLancamento;
    cout << "Qual é a duração de minutos do terceiro filme?" << endl;
    cin >> movie[2].DuracaoMinutos;

    for(Filme filme : movie){
        if(velho > filme.AnoLancamento){
            velho = filme.AnoLancamento;
            nome = filme.Titulo;
        }
    }
    cout << "O filme mais antigo é " << nome << " e foi lançado em " << velho << endl;
}



















