#include <iostream>

int main(){
	int idade = 25;
	float altura = 1.75;
	double peso = 70.5;
	char inicial = 'A';
	bool estudante = true;
	
	std::cout << "idade: " << idade << std::endl;
	std::cout << "altura: " << altura << std::endl;
	std::cout <<"peso: " << peso << std::endl;
	std::cout << "inicial: " << inicial <<std::endl;
	std::cout << "estudante: " << (estudante ? "sim" : "n�o") << std::endl;
	
	return 0;
}
