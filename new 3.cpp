#include <iostream>

using namespace std;
int main() {
    int numero;

    cout << "Digite o numero inteiro:"
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O numero é par" << endl;
    } else if (numero < 0) {
        cout << "o numero é negativo"; << endl;
    }
    else {
        cout << "O numero é zero" << endl;
    }

    return 0;
}