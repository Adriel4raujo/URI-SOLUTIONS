//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A, B, C, PI, AREAT, AREAC, AREATR, AREAQ, AREAR;
	
	PI= 3.14159;
	
	scanf("%lf %lf %lf", &A , &B, &C);
	
	AREAT= (A*C)/2;
	
	AREAC= PI*C*C;
	
	AREATR= ((A+B)*C)/2;
	
	AREAQ= B*B;
	
	AREAR= A*B;
	
	printf("TRIANGULO: %.3lf\n", AREAT);
	printf("CIRCULO: %.3lf\n", AREAC);
	printf("TRAPEZIO: %.3lf\n", AREATR);
	printf("QUADRADO: %.3lf\n", AREAQ);
	printf("RETANGULO: %.3lf\n", AREAR);
	
return 0;
}
