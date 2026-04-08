#include <iostream>
using namespace std;

int func(int n){
int reverso = 0;

while(n != 0){
int ultimoDigito = n % 10;
reverso = (reverso * 10) + ultimoDigito;
n /= 10;
}
return reverso;
}
int main(){
int num;
cout << "Digite um número inteiro: " << endl;
cin >> num;

int resultado = func(num);

cout << "O reverso de " << num << " é " << resultado << endl;
}