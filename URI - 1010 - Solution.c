//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main (){
	
	int A, C;
	double B, D, TOTAL;
	
	scanf("%*s %d %lf", &A, &B);
	scanf("%*s %d %lf", &C, &D);
	
	TOTAL= A*B + C*D;
	
	printf("VALOR A PAGAR: R$ %.2lf\n", TOTAL);
	
return 0;
}
