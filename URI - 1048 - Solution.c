//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A, B;
	
	scanf("%lf", &A);
	
	if(A>0&&A<=400.0){
		B= (A*15)/100;
		printf("Novo salario: %.2lf\n", (A+B));
		printf("Reajuste ganho: %.2lf\n", B);
		printf("Em percentual: 15 %%\n");
	}
	else if(A>400&&A<=800.0){
		B= (A*12)/100;
		printf("Novo salario: %,.2lf\n", (A+B));
		printf("Reajuste ganho: %.2lf\n", B);
		printf("Em percentual: 12 %%\n");
	}
	else if(A>800&&A<=1200.0){
		B=(A*10)/100;
		printf("Novo salario: %.2lf\n", (A+B));
		printf("Reajuste ganho: %.2lf\n", B);
		printf("Em percentual: 10 %%\n");
	}
	else if(A>1200&&A<=2000){
		B=(A*7)/100;
		printf("Novo salario: %.2lf\n", (A+B));
		printf("Reajuste ganho: %.2lf\n", B);
		printf("Em percentual: 7 %%\n");
	}
	else if(A>2000){
		B= (A*4)/100;
		printf("Novo salario: %.2lf\n", (A+B));
		printf("Reajuste ganho: %.2lf\n", B);
		printf("Em percentual: 4 %%\n");
	}
return 0;
}
