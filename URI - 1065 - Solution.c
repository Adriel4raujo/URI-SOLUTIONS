//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, x;
	
	int cont=0;
	
	for(i=0; i<5; i++){
		scanf("%d", &x);
		if((x%2)==0){

			cont++;
		}
	}
	printf("%d valores pares\n", cont);
	
return 0;
}
