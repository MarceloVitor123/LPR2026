#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> JogoEGenero;

    for(int i = 0; i < 5; i++){
        cout << "Digite o nome do jogo: " << endl;
        string jogo;
        cin >> jogo;
        cout << "Digite o genero do jogo: " << endl;
        string genero;
        cin >> genero;
        JogoEGenero[jogo] = genero;

        cout << "Jogo: " << jogo << " E genero: " << genero << endl;

    }

    string JogoProcurado;
    cout << "Digite o nome do jogo para consultar: " << endl;
    cin >> JogoProcurado;

    auto it = JogoEGenero.find(JogoProcurado);
        if(it != JogoEGenero.end())
        {
            cout << "O genero do jogo " << JogoProcurado << " e: " << it->second << endl;
        }
        else{
            cout << "O map não contém esse jogo" << endl;
        }
 
}