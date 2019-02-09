//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, X, Y, Z;
	
	scanf("%d", &N);
	
	X= N/365;
	
	Y= (N%365)/30;
	
	Z= (N%365)%30;
	
	printf("%d ano(s)\n", X);
	printf("%d mes(es)\n", Y);
	printf("%d dia(s)\n", Z);
	
return 0;
}
