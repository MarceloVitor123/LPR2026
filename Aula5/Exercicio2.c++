#include <iostream>
#include <random>

using namespace std;

int main() {

random_device numAleat;
uniform_int_distribution<> distribuicao(1, 100);
int valorInteiro = distribuicao(numAleat);
int chute;
int tentativas = 0;

do {
cout << "Digite um número aleatório: " << endl;
cin >> chute;
tentativas++;

if(chute > valorInteiro){
    cout << "Chutou alto" << endl;
}
else if(chute < valorInteiro){
    cout << "Chutou baixo" << endl;
}
else{
    cout << "Parabéns, você acertou o número" << endl;
}
}while(chute != valorInteiro);

cout << "Você acertou em " << tentativas << " tentativas" << endl;
}
