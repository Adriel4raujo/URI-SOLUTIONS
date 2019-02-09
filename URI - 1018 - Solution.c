//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main ()
{
	
	int i, valor, qntd;
	int notas[7]= {100,50,20,10,5,2,1};
	
	scanf("%d", &valor);
	printf("%d\n", valor);
	
	for(i=0; i<7; i++)
	{
		qntd= valor/notas[i];
		valor= valor%notas[i];
		
		printf("%d nota(s) de R$ %d,00\n", qntd, notas[i]);
	}
	
return 0;
}
