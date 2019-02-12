//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, x;
	
	scanf("%d", &x);
	
	if(x%2==0){
		for(i=x; i<x+12; i++){
			if((i%2)==1){
				printf("%d\n", i);
			}
		}
	}
	else{
		for(i=x+1; i<x+13; i++){
			if((i%2)==1){
				printf("%d\n", i);
			}
		}
	}
	
return 0;
}
