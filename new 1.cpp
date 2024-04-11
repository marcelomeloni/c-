#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	
	cout << "Digite o valor de a:";
	cin >> a;
	cout << "Digite o valor de b";
	cin >> b;
	cout << "Digite o valor de c";
	cin >> c;
	
	int maior = a;
	if (b > maior){
		maior = b;
	}
	if (c > maior){
		maior = c;
	}
	
	cout << "Valores lidos:" << a << "," << b << "," <<c << endl;
	cout << " O maior valor entre os três é: " << maior << endl;

	return 0;
}