#include <iostream>
using namespace std;

void cont(int n, int conte = 0);

int main (){
	
	cont(10); 
	
}
void cont(int n,int conte){ // a recursividade é quando eu crio uma função que chama ela mesma funcionado nesse caso como um laço de repetição 
	cout << conte << "\n";
	if (n > conte){
		cont (n, ++conte);// vai verificar se o número maximo é maior que o pedido, se for maior encerra as chamadas 
	}
}
