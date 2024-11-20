#include <iostream>

using namespace std;

int main() {
  // Declara um vetor para armazenar as letras
  char letras[10];

  // Declara variáveis para armazenar o contador de vogais
  int cont_a = 0, cont_e = 0, cont_i = 0, cont_o = 0, cont_u = 0;
  int cont_vogais = 0;

  // Lê as letras digitadas pelo usuário
  for (int i = 0; i < 10; i++) {
    cout << "Digite a letra " << i + 1 << ": ";
    cin >> letras[i];
  }

  // Inicializa o contador de vogais
  cont_a = cont_e = cont_i = cont_o = cont_u = 0;

  // Verifica se alguma das letras é uma vogal
  for (int i = 0; i < 10; i++) {
    if (letras[i] == 'a' || letras[i]=='A') {
      cont_a++;
    } else if (letras[i] == 'e' || letras[i]=='E') {
      cont_e++;
    } else if (letras[i] == 'i' || letras[i]=='I') {
      cont_i++;
    } else if (letras[i] == 'o' || letras[i]=='O') {
      cont_o++;
    } else if (letras[i] == 'u' || letras[i]=='U') {
      cont_u++;
    }
  }

  // Calcula o número total de vogais
  cont_vogais = cont_a + cont_e + cont_i + cont_o + cont_u;

  // Exibe o resultado
  cout << endl;
  cout << "Total de letras A: " << cont_a << endl;
  cout << "Total de letras E: " << cont_e << endl;
  cout << "Total de letras I: " << cont_i << endl;
  cout << "Total de letras O: " << cont_o << endl;
  cout << "Total de letras U: " << cont_u << endl;
  cout << endl;
  cout << "Número de vogais encontradas: " << cont_vogais << endl;

  return 0;
}
