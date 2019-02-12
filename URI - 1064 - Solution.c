//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i;
	
	int cont=0;
	
	double x, vet[6], media;
	for(i=0; i<6; i++){
		scanf("%lf", &x);
		if(x>0){
			vet[i]= x;
			cont++;
		}
	}
	
	for(i=0; i<6; i++){
		media+= vet[i];
		
	}
	
	media=media/cont;
	printf("%d valores positivos\n", cont);
	printf("%.1lf\n", media);
	
return 0;
}
