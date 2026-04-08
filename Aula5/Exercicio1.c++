#include <iostream>
#include <locale>

using namespace std;

int main(){
   int qtdnum = 0;
   int numero = 0;
   int acumulador = 0;
   int contador = 0; 

   cout << "Digite a quantidade do conjunto de números pares: ";
   cin >> qtdnum;

   while (contador < qtdnum)
   {
      cout << "Digite o conjunto de números pares: ";
      cin >> numero;

    if(numero % 2 == 0){
      acumulador += numero;
      contador++;
    }
    if(contador > 0){
      double media = (double)acumulador / contador;
      cout << "A média dos números é: " << media << endl;
    }
    else{
      cout << "Caso inválido" << endl;
    }
   }
}