#include <iostream>
using namespace std;

int main (){
	
	enum armas{fuzil=100, basuca, sniper};// o enum é uma variaçõe de variavéis que armazena valores inteiros em nomes como se fosse um vetor invertido
	// ele é sequencial, se fuzil é igual a 100 bazuca é 101 e se não estivesse nenhum valor iria começar como zero 
	armas armaSel; // aqui funciona como a criação de uma variaél do tipo arma 
	armaSel=sniper; // a qual recebe o valor dentro de um nome especifico 
	
	cout <<armaSel;
	
	return 0;
}
