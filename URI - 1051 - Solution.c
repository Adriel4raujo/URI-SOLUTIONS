//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A;
	scanf("%lf", &A);
	
	if(A>0&&A<=2000){
		printf("Isento\n");
	}
	else if(A>2000&&A<=3000){
		A= ((A-2000)*8)/100.0;
		printf("R$ %.2lf\n", A);
	}
	else if(A>3000&&A<=4500){
		A= 80 + ((A-3000)*18)/100;
		printf("R$ %.2lf\n", A);
	}
	else if(A>4500){
		A= 80+270+(((A-4500)*28)/100);
		printf("R$ %.2lf\n", A);
	}
	
return 0;
}
