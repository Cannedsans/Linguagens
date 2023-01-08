#include <iostream>

using namespace std;

struct carro{
	float gas,pot;
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
	cout <<"capacidade de gasolina(l).:" << gas<< "\n\n";}
};

int main (){
	
	carro *carros=new carro[5];//essa parte do comando é um ponteiro isso será explicado sobre ponteiros
	
	carro car1, car2, car3, car4, car5;
	
	carros[0].inserir("tesla","preto",200,800);// definir os valores dos vatores é complicado pois nesse caso é nescessario definir um por um
	carros[1].inserir("raio","azul",300,600);
	carros[2].inserir("tornado","prata",700,500);
	carros[3].inserir("autobot","dourado",250,750);
	carros[4].inserir("ford","vermelho",100,400);
	
	for (int i=0;i<=5;i++){// aqui a facilidade para os vetores é o for afinal com ele dá para mostrar tudo assim
		carros[i].mostrar();
	}
	
	car1.mostrar();
	
}
