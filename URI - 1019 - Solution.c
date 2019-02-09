//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, X, Y, Z;
	
	scanf("%d", &N);
	
	X= N/3600;
	
	Y= (N%3600)/60;
	
	Z= (N%3600)%60;
	
	printf("%d:%d:%d\n", X, Y, Z);
	
return 0;
}
