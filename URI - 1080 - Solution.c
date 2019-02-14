//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, i, aux, x, cont;
	
	aux=0;
	
	scanf("%d", &N);	

	for(i=1; i<101; i++){
		scanf("%d", &x);
		if(x>aux){
			aux= x;
			cont= i+1;
		}
	}
	
	printf("%d\n", aux);
	printf("%d\n", cont);

return 0;
}
