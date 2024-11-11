#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Solicita ao usu�rio os valores dos lados do tri�ngulo
    cout << "Digite o valor do lado a: ";
    cin >> a;
    cout << "Digite o valor do lado b: ";
    cin >> b;
    cout << "Digite o valor do lado c: ";
    cin >> c;

    // Verifica se � poss�vel formar um tri�ngulo
    if (a + b > c && a + c > b && b + c > a) {
        cout << "� poss�vel formar um tri�ngulo." << endl;

        // Identifica o tipo de tri�ngulo
        if (a == b && b == c) {
            cout << "Tri�ngulo equil�tero." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Tri�ngulo is�sceles." << endl;
        } else {
            cout << "Tri�ngulo escaleno." << endl;
        }
    } else {
        cout << "N�o � poss�vel formar um tri�ngulo com esses lados." << endl;
    }

    return 0;
}

