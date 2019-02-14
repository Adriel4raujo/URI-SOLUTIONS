//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, K;
	K=7;
	
	for(i=0; i<3; i++){
		printf("I=1 J=%d\n", K);
		K--;
	}
	K=7;
	for(i=0; i<3; i++){
		printf("I=3 J=%d\n", K);
		K--;
	}
	K=7;
	for(i=0; i<3; i++){
		printf("I=5 J=%d\n", K);
		K--;
	}
	K=7;
	for(i=0; i<3; i++){
		printf("I=7 J=%d\n", K);
		K--;
	}
	K=7;
	for(i=0; i<3; i++){
		printf("I=9 J=%d\n", K);
		K--;
	}
	
return 0;
}
