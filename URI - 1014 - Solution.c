//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int X;
	double Y, Z;
	
	scanf("%d %lf", &X, &Y);
	
	Z= X/Y;
	
	printf("%.3lf km/l\n", Z);
	
return 0;
}
