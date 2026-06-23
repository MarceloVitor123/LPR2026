#include <iostream>
#include <array>

using namespace std;

struct Livro{
    string Titulo;
    string Autor;
    int AnoPublicacao;
    int NumeroPaginas;
    double Preco;
};

int main(){
    array<Livro,3>book;
    double media, pt = 0;


    cout << "Qual é o título do primeiro livro? " << endl;
    cin >> book[0].Titulo;
    cout << "Qual é o autor do primeiro livro? " << endl;
    cin >> book[0].Autor;
    cout << "Qual é o ano de publicação do primeiro livro? " << endl;
    cin >> book[0].AnoPublicacao;
    cout << "Qual é o número de páginas do primeiro livro? " << endl;
    cin >> book[0].NumeroPaginas;
    cout << "Qual é o preço do primeiro livro? " << endl;
    cin >> book[0].Preco;

    cout << "Qual é o título do segundo livro? " << endl;
    cin >> book[1].Titulo;
    cout << "Qual é o autor do segundo livro? " << endl;
    cin >> book[1].Autor;
    cout << "Qual é o ano de publicação do segundo livro? " << endl;
    cin >> book[1].AnoPublicacao;
    cout << "Qual é o número de páginas do segundo livro? " << endl;
    cin >> book[1].NumeroPaginas;
    cout << "Qual é o preço do segundo livro? " << endl;
    cin >> book[1].Preco;

    cout << "Qual é o título do terceiro livro? " << endl;
    cin >> book[2].Titulo;
    cout << "Qual é o autor do terceiro livro? " << endl;
    cin >> book[2].Autor;
    cout << "Qual é o ano de publicação do terceiro livro? " << endl;
    cin >> book[2].AnoPublicacao;
    cout << "Qual é o número de páginas do terceiro livro? " << endl;
    cin >> book[2].NumeroPaginas;
    cout << "Qual é o preço do terceiro livro? " << endl;
    cin >> book[2].Preco; 

    for(Livro livro : book){
        media += livro.NumeroPaginas; // media += livro.NumeroPaginas ---> media = media + livro.NumeroPaginas
        pt += livro.Preco;
    }
    media = media / 3;
    cout << "O preço total dos livros é " << pt << " e a média de páginas é " << media << endl;
}
