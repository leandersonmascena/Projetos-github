#include <iostream>
using namespace std;

// Função para verificar se um CPF é válido
bool validarCPF(string cpf) {
    if (cpf.length() != 11) {
        return false; // CPF deve ter 11 dígitos
    }

    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }

    int primeiroDigito = (soma % 11 < 2) ? 0 : 11 - (soma % 11);

    if (cpf[9] - '0' != primeiroDigito) {
        return false; // Primeiro dígito verificador incorreto
    }

    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }

    int segundoDigito = (soma % 11 < 2) ? 0 : 11 - (soma % 11);

    return cpf[10] - '0' == segundoDigito; // Segundo dígito verificador correto
}

    int main() {
    string cpf;
    cout << "Digite um CPF (sem pontos ou traços): ";
    cin >> cpf;

    if (validarCPF(cpf)) {
        cout << "CPF válido!" << endl;
    } else {
        cout << "CPF inválido!" << endl;
    }

    return 0;
    }  

