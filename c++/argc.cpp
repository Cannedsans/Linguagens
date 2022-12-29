#include <iostream>
#include <string.h>
using namespace std;

int main (int argc, char*argv[]){ //essa função dentro do programa são "parametros" permitem que eu interaja com o programa via cmd
	
	if (argc > 1){ // se ouver mais de um parametro o programa fará algo
		if(!strcmp(argv[1],"sol")){ // a negação de strcmp vai comparar se oq voi escrito como parametro é sol ou lua, foi nescessario a negação pq se forem iguais vam 0=falso
			cout << "então está de dia";
		}else if(!strcmp(argv[1],"lua")){
			cout << "então está de noite";
	    }
	}// o legal que se eu cria um atalho e escrever nas propriedades o argumento após o nome dele ele já executa o parametro igual 
}// com isso é possivél criar commandos para o windos ( e no linux talvez).
