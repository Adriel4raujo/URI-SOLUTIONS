//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, i;
	
	scanf("%d", &N);	
	
	for(i=1; i<11; i++){
		printf("%d x %d = %d\n", i, N, (i*N));
	}

return 0;
}
