//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int A, B, total;
	
	scanf("%d %d", &A, &B);
	
	if(A>=B){
		B=B+24;
		total= B-A;
		printf("O JOGO DUROU %d HORA(S)\n", total);
	}else if(A<B){
		total=B-A;
		printf("O JOGO DUROU %d HORA(S)\n", total);
	}
	
return 0;
}
