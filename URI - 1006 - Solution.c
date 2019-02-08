//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A, B, C, MEDIA;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	MEDIA = (((A*2)+(B*3)+(C*5))/10);
	
	printf("MEDIA = %.1lf\n", MEDIA);
	
return 0;
}
