//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int vetor[3], vetor2[3], aux, i, j;
	for(i=0; i<3; i++){

		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<3;i++){
		vetor2[i]=vetor[i];
	}
	
	for(i=0; i<3; i++){
		aux= vetor[i];
		j= i-1;
		
		while( j>=0 && vetor[j]>aux ){
			
			vetor[j+1]=vetor[j];
			vetor[j]= aux;
			j--;
		}
	}
	
	for(i=0; i<3; i++){
		printf("%d\n", vetor[i]);
	}
	printf("\n");
	for(i=0; i<3; i++){
		printf("%d\n", vetor2[i]);
	}
return 0;
}
