#include <iostream>
using namespace std;

void soma(int n1=1, int n2=1);

int main (){
	soma(/*15,5*/);// se eu não quiserfornecer o valor de parametro é só pre definir um na prototipagem 
	return 0;
}
void soma(int n1, int n2){
	cout << n1 <<"+" << n2 << "igual a.:"<< n1+n2;
}
