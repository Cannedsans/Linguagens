#include <iostream>
using namespace std;//o comando void serve para criar funções dentro dos comandos 

void soma(int n1, int n2); //para começar tem que prototipar se não, não funciona 
void texto();

int main (){
	int res; 
  texto(); //ao colocar o nome da função ele funciona como um comando que voçe criou 
	soma(15,5); // os valores do nome são enviados para a função como variaveis 
	return 0;
}

void texto(){ // a função tem que ser executado fora do corpo com o comando void
	cout << "\nO void nao esta vazio\n";
}

void soma(int n1, int n2){
	cout << n1 <<"+" << n2 << "igual a.:"<< n1+n2;
}
