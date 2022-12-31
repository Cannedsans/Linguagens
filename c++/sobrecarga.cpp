#include <iostream>
using namespace std;

void soma(int n1, int n2);// algo quase exclusivo do c++ é a sobrecarga de funções que é quando duas ou mais funções te o mesmo nome 
void soma();// a unica coisa que deve ser diferente são os parametros para sua execução

int main (){
	int res;
	soma(15,5);
	return 0;
}
void soma(int n1, int n2){
	cout << n1 <<"+" << n2 << "igual a.:"<< n1+n2;
}
void soma (){
	cout <<"eu funciono";
}



