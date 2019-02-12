//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, i, aux;
	
	scanf("%d", &N);

	for(i=1; i<N+1; i++){
		if(i%2==0){
			aux= i*i;
			printf("%d^2 = %d\n", i, aux);
		}
	}

return 0;
}
