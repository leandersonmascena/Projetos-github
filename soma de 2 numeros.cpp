#include <stdlib.h>
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
   
	float numero1;
	float numero2;
	float Total;
	
	cout << "digite um numero: ";
	cin >> numero1;
	cout << endl;
	cout << "digite outro numero : ";
	cin >> numero2;
	cout << endl;
	Total = numero1 + numero2;
	cout << "soma dos numeros: " << Total << endl;
	cout << endl;
	system ("PAUSE");
	return 0;
}
