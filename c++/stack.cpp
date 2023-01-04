#include <iostream>
#include <stack> // esse comando spo funcioa apartir de uma biblioteca 
using namespace std;

int main (){
	
	stack <string> cartas; // as pilhas são como vetores verticais só que há uma ordem para os valores como se estivessem empilhados um em cima do outro 
	
	if (cartas.empty()){ // empty é um comando para verificar se há objetos na pilha 
		cout << "ainda não há cartas\n\n";
	}
	
	cartas.push("copas"); // o comando push serve para adicionar os valores a pilha 
	cartas.push("espadas");
	cartas.push("ouro");
	cartas.push("paus");
	
	cout << "tem, " << cartas.size() << " cartas no baralho\n"; //size para ver o tamanho da pilha 
	
	cout << "vai puxar o .:" << cartas.top() << "\n"; //top vai indicar o valor no topo da pilha (o ultimo valor a ser adicionado)
	
	cartas.pop(); //pop vai retirar o valor do topo
	
	cout << "agora tem, " << cartas.size() << " cartas no baralho\n";
	
	cout << "vai puxar o .:" << cartas.top() << "\n";
	
	while (!cartas.empty()){
		cartas.pop();
	}
	
	cout << "agora tem, " << cartas.size() << " cartas no baralho\n";
}
