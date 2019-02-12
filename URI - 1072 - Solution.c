//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, i, X, cont, c2;
	c2=0;
	cont=0;
	scanf("%d", &N);

	for(i=0; i<N; i++){
		scanf("%d", &X);
		if(X>=10&&X<=20){
			cont++;
		}
		else{
			c2++;
		}
	}
	printf("%d in\n", cont);
	printf("%d out\n", c2);
return 0;
}
