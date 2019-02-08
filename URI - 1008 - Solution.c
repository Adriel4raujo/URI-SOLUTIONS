//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int A, B;
	double C, SALARY;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%lf", &C);

	
	SALARY = B*C;
	
	printf("NUMBER = %d\n", A);
	printf("SALARY = U$ %.2lf\n", SALARY);
	
return 0;
}
