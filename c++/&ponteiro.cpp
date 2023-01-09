#include <iostream>

using namespace std;

int main (){
	
	string p1 = "minecraft";
	string *pv; // um ponteiro é uma variavel que armazena a posição de outra variavel 
	
	pv=&p1; // ponteiro pv recebe o endereço da variavel p1
	
	cout << p1 << "\n" << &p1;
	
	*pv = "terraria"; // adicione terraria como valor da variavel no endereço de pv
	
	cout << "\n" << *pv;
	
	int *p;
	int vetor[10];
	
	p=vetor;//funciona igual a p=&vetor[0]
	
	cout << "\n" << p;//o endereço e guardado em numeros hexadecimais 
	
	*(p++);// se incrementar assim vai pro ponto seguinta na memoria 
	
	cout << "\n" << p;
	
	
}
