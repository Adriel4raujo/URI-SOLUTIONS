//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, x;
	
	scanf("%d", &x);
	
	for(i=1; i<x+1; i++){
		if((i%2)==1){
			printf("%d\n", i);
		}
	}

	
return 0;
}
