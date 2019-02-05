/*Autor: Adriel Araujo
-Estudante de Ciencias da Computação UECE 2016.2 - 1422340
Author: Adriel Araujo
-Student of Computer Science in UECE 2016.2 - 1422340*/

#include <stdio.h>

int main(void) {
	int N, R, i, j, aux=0, cont=0;
	
	while(scanf("%d %d", &N, &R)!=EOF){
	
		int vetor[10000], vet[20000];
			
		for(i=0; i<N; i++){
			vetor[i]= i+1;
		}
		
		for(i=0; i<R; i++){
			scanf("%d", &vet[i]);
		}
		
		if(N==0 && R==0){
			return 0;
		}
		else{
			
	    	for(i=0; i<N; i++){
				for(j=0; j<R; j++){
					if(vetor[i]==vet[j]){
						cont++;
					}
				}
					
				if((cont!=0) && (cont!=1)){
					aux++;
				}
				cont=0;
			}
			
			printf("%d\n", aux);
		}
		aux=0;
	}
return 0;
}
