#include <iostream>

using namespace std;

struct carro{ // para definir ele é fora do programa principal
	float gas,pot; //dentro dele as propriedades são adicionados como  variaveis 
	string nome, cor;
	
	void inserir(string stnome,string stcor, int stpot,int stgas){
	nome = stnome;
	cor = stcor;
	pot = stpot;
	gas = stgas ;
	}
	void mostrar(){
	cout <<"modelo....................:" << nome<< "\n";
	cout <<"cor.......................:" << cor<< "\n";
	cout <<"potencia(cavalos).........:" << pot<< "\n";
	cout <<"capacidade de gasolina(l).:" << gas<< "\n";}
};

int main (){
	
	carro car1, car2; //definir elementos dentro da estrutura como uma variavél 
	
	carro car1, car2;
	
	car1.inserir("tesla","preto",200,800);
	
	
	car1.mostrar();
	
	/*car1.nome = "testla";
	car1.cor = "preto";
	car1.pot = 500;
	car1.gas = 800;
	
	forma pouco eficas
	
	car2.nome = "decepticon";
	car2.cor = "branco";
	car2.pot = 250;
	car2.gas = 600;
	
	cout <<"modelo....................:" << car1.nome<< "\n";
	cout <<"cor.......................:" << car1.cor<< "\n";
	cout <<"potencia(cavalos).........:" << car1.pot<< "\n";
	cout <<"capacidade de gasolina(l).:" << car1.gas<< "\n";
	cout << "\n";
	cout <<"modelo....................:" << car2.nome<< "\n";
	cout <<"cor.......................:" << car2.cor<< "\n";
	cout <<"potencia(cavalos).........:" << car2.pot<< "\n";
	cout <<"capacidade de gasolina(l).:" << car2.gas<< "\n";*/
}
