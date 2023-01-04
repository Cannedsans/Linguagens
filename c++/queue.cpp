#include <iostream>
#include <queue> // para essas comando funcionarem nescessitam dessa biblioteca
using namespace std;

int main (){
	
	queue <string> pessoa; // uma fila e parece com a pilha porém o primeio a entrar e o primeiro a sair
	
	pessoa.push ("Joana");
	pessoa.push ("Jonathan");
	pessoa.push ("Elizabeta");
	pessoa.push ("Summer");
	pessoa.push ("Marinete")
	
	while(!pessoa.empty()){
		cout << "proxima pessoa e .:" << pessoas.front <<"\n"; //Marinete .: o front e o priemiro a sair 
		cout << "ultima pessoa e ..:" << pessoas.back << "\n"; //Summer   .: o front e o ultimo a sair 
		pessoa.pop(); // as filas tem os mesmos comando das listas porém não há o comando top
	}
}
