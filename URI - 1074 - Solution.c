//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, i, aux;
	
	scanf("%d", &N);
	int vet[N];
	
	for(i=0; i<N; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<N; i++){
		if(vet[i]%2==0){
			if(vet[i]>0){
				printf("EVEN POSITIVE\n");
			}
			else if(vet[i]<0){
				printf("EVEN NEGATIVE\n");
			}
			else{
				printf("NULL\n");
			}
		}
		else{
			if(vet[i]>0){
				printf("ODD POSITIVE\n");
			}
			else{
				printf("ODD NEGATIVE\n");
			}
		}
	}

return 0;
}
