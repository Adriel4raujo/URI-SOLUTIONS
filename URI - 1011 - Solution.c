//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double PI, R, AREA;
	
	PI= 3.14159;
	
	scanf("%lf", &R);
	
	AREA= ((4.0/3)*PI*R*R*R);
	
	printf("VOLUME = %.3lf\n", AREA);
	
return 0;
}
