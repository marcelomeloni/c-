#include <iostream>

using namespace std;

int main(){
    int a, b;

    cout << "Digite o valor de a:"
    cin >> a;
    cout << "Digite o valor de b:"
    cin >> b;

    if (a % b == 0 | | b % a == 0) {
        cout << a << "e" << b << "sao multiplos" endl;
     } else {
        cout << a << "e" << b << "nao sao multiplos" endl;
     }

     return 0;
    }
