#include <iostream>
#include <vector>

using namespace std;

int main(){

vector<int> numeros(10);
vector<int> numpares(10);
vector<int> numimpares(10);

    int digito, contador = 0;

    cout << "Digite 10 números inteiros: ";

    while(contador < 10)
    {
            contador++;
            
        
            if(digito % 2 == 0){
            numpares[contador];
            
            }
            else{
            numimpares[contador];
              
            }
        
    }

    for(int i = 0; i < 10; i++){
        if(contador != 0){
            cin >> numeros[i];
        cout << "Números pares: " << numpares[i] << endl;
        cout << "Números pares: " <<  numimpares[i] << endl;
    }
    
}
}
