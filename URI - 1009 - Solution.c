//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	
	double A, C, SALARY;
	
	scanf("%*s");
	scanf("%lf", &A);
	scanf("%lf", &C);

	
	SALARY = A+(C*15/100);
	
	printf("TOTAL = R$ %.2lf\n", SALARY);
	
return 0;
}
