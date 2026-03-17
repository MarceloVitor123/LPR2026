#include <iostream>
#include <iomanip>
#include <locale> 

using namespace std;
int main() {
    setlocale(LC_ALL, "pt_BR.utf8"); 

int num, horas;
double valor, salario;

cout << fixed << setprecision(2);

cout << "Digite o número de funcionário: ";
cin >> num;
cout << "Digite as horas trabalhadas: ";
cin >> horas;
cout << "Digite o valor que recebe por hora: ";
cin >> valor;

salario = horas * valor;


cout << "Número do funcionário: " << num << "\nO salário é: R$" << salario << endl;

return 0;
}