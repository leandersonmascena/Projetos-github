#include <iostream>
using namespace std;

// Fun��o para verificar se um CPF � v�lido
bool validarCPF(string cpf) {
    if (cpf.length() != 11) {
        return false; // CPF deve ter 11 d�gitos
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }

    int primeiroDigito = (soma % 11 < 2) ? 0 : 11 - (soma % 11);

    if (cpf[9] - '0' != primeiroDigito) {
        return false; // Primeiro d�gito verificador incorreto
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }

    int segundoDigito = (soma % 11 < 2) ? 0 : 11 - (soma % 11);

    return cpf[10] - '0' == segundoDigito; // Segundo d�gito verificador correto
}

    int main() {
    string cpf;
    cout << "Digite um CPF (sem pontos ou tra�os): ";
    cin >> cpf;

    if (validarCPF(cpf)) {
        cout << "CPF v�lido!" << endl;
    } else {
        cout << "CPF inv�lido!" << endl;
    }

    return 0;
    }  

