//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double raio, area;
	double pi = 3.14159;
	
	scanf("%lf\n", &raio);
	
	area= pi*raio*raio;
	
	printf("A=%.4f\n", area);
	
return 0;
}
