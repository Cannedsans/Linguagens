#include <conio.h>
#include <stdio.h>
main()
{
    float valor_compra, valor_desconto, valor_pagar;
    int desconto;
    char nome[30];
    printf ("digite o nome");
    scanf ("%s", nome);
    printf ("digite o valor da compra");
    scanf ("%f" ,valor_compra);
    
    if (valor_compra <= 200)
       valor_desconto = 10;
    else if (valor_compra <= 500)
      valor_desconto = 15;
    else
      valor_desconto = 20;
     
    valor_desconto = (valor_compra * valor_desconto ) / 100; 
    valor_pagar = valor_compra - valor_desconto;
    
    printf ("cliente .:%s",nome);
    printf (" valor da compra.: %f",valor_compra);
    printf (" valor do desconto .: %F",valor_desconto);
    printf (" percentual do desconto .:%d",desconto);
    printf (" valor total a pagar .:%f", valor_pagar);
    getch ();
}
