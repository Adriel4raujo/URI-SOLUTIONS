//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A, B, C, PER, AREA;
	
	scanf("%lf %lf %lf", &A, &B, &C);
	
	if((A+B)>C&&(A+C)>B&&(B+C)>A){
		PER= A+B+C;
		printf("Perimetro = %.1lf\n", PER);
	}else{
		AREA= ((A+B)*C)/2;
		printf("Area = %.1lf\n", AREA);
	}
	
return 0;
}
