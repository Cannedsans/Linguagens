#include <iostream>
#include <list> // biblioteca novamente 
using namespace std;

int main (){
	
	list <int> teste; // a lista é praticamente um vetor com mais funções
	int t=10; // esse valor serve para funcionar nos laçoes de repetição
	list <int>::iterator it; // o iterator serve para colocar valores onde eu quiser
	
	for (int i=1; i <=t;i++){
		teste.push_front(i);// esse for é só para adicionar o valor
	}
	
	it = teste.begin(); 
	advance(it,5); // esses três códigos serven para colocar um valor 
	
	teste.insert(it,0); //coloquei o valor zero na posição 5 
	
	//teste.sort(); esse comando serve para organizar os comandos  
	//teste.reverse(); esse comando inverte a ordem 
	
	cout << "tamanho da lista[" << teste.size() << "]\n"; 
	
	t = teste.size();
	
	for (int i=1; i <=t;i++){
		cout <<"[" << teste.front() << "]\n";
		teste.pop_front(); //tira o primeiro iten porém dá para retiar do ultimo
	}
	
	
	
}
