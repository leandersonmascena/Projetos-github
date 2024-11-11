#include <iostream>

using namespace std;
int main(){
	int a = 10;
	int b = 3;
	
	cout << "a + b = " << (a + b) << std::endl;
	cout << "a - b = " << (a - b) << std::endl;
	cout << "a * b = " << (a * b) << std::endl;
	cout << "a / b = " << (a / b) << std::endl;
	cout << "a % b = " << (a % b) << std::endl;
	
	bool resultado = (a > b) && (b < 5);
	cout << "resultado: " << resultado << std::endl;
	
	return 0;
}
