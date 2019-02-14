//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, J, K;
	J=1;
	K=60;
	for(i=1; i<14; i++){
		printf("I=%d J=%d\n", J, K);
		J=J+3;
		K=K-5;
	}
	
return 0;
}
