#include <iostream>

using namespace std;

void soma(float *v1,float v2);
void ptar(float *v);

int main (){//escopo
	float n=0;
	float vetor[5];
	
	cout << n;
	
	soma(&n,15);// para somar variaveis fora do escop só funcionarar se usar ponteiros
	ptar(vetor);// para vetores tambem porém porém na hora de definir não é nescessario definir o ponteiro via local
	
	cout << "\n" << n << "\n";
	
	for (int i=0; i<=4;i++){
		cout << vetor [i] << "\n";
	}
	
}

void soma(float *v1,float v2){
	*v1+=v2;
}

void ptar(float *v){
	v[0]=1;
	for (int i=0; i<4;i++){
		v[i]+=i;
	}
}
