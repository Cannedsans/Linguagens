#include <iostream>
using namespace std;

int main (){
	int n=0;// o zero no cpp também tem o valor lógico falso
	do { // o "do" não tem uma tradução perfeita porém pode significar faça ou seja é uma ordem de execução (neste contexto)
		cout << n;
	}while (n); /* o while está endo executado só após o do pois esse comando verifica a condição e só depois executa o loop,
  isso significa que quando a condição já é falso o loop não é executado, porém com o do ele é executado ao menos uma vez.*/
}
   
