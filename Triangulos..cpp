#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Solicita ao usuário os valores dos lados do triângulo
    cout << "Digite o valor do lado a: ";
    cin >> a;
    cout << "Digite o valor do lado b: ";
    cin >> b;
    cout << "Digite o valor do lado c: ";
    cin >> c;

    // Verifica se é possível formar um triângulo
    if (a + b > c && a + c > b && b + c > a) {
        cout << "É possível formar um triângulo." << endl;

        // Identifica o tipo de triângulo
        if (a == b && b == c) {
            cout << "Triângulo equilátero." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Triângulo isósceles." << endl;
        } else {
            cout << "Triângulo escaleno." << endl;
        }
    } else {
        cout << "Não é possível formar um triângulo com esses lados." << endl;
    }

    return 0;
}

