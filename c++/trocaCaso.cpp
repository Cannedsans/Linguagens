#include <iostream>

int main (){
	
	int n=0;
   switch(n){ //o comando serve para criar "opções" é em que o valor da variavél executa um comando diferente 
   	case 1:// o "case" é uma opção e vai ser executado caso o valor da variavél monitorado for igual ao numero dele 
   		printf ("numero 1");
   		break;// o break serve para sair do switch afianl já foi executado então não é nescessario continuar nele 
   	case 2: // (pode colocar case seguidos para mais de uma opção 
       /*ex.:
       case 2:
       case 3: 
       comando 
       break;*/
   		printf ("numero 2");
   		break;
   	default: // o default é para caso nenhum case tiver sido executado 
   		printf ("outro numero");
   }
   
}
