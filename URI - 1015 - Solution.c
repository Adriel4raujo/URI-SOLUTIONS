//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>
int main (){
	
	double X, Y, X2, Y2, Z;
	
	scanf("%lf %lf", &X, &Y);
	scanf("%lf %lf", &X2, &Y2);
	
	Z= sqrt(((X2-X)*(X2-X)) + ((Y2-Y)*(Y2-Y)));
	
	printf("%.4lf\n", Z);
	
return 0;
}
