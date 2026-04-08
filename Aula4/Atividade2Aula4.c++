#include <iostream>

using namespace std;

int main() {
int A, B;

cout << "Digite o primeiro número inteiro: ";
cin >> A;
cout << "Digite o segundo número inteiro: ";
cin >> B;

if(A % B == 0 || B % A == 0){
cout << "Os números " << A << " e " << B << " são multiplos";
}
else
{
cout << "Os números " << A << " e " << B << " não são multiplos";
}
}