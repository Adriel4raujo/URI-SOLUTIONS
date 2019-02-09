//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, j;
	double vetor[3], aux;
	
	for(i=0; i<3; i++){
		scanf("%lf", &vetor[i]);
	}		
	
	for(i=0; i<3; i++){
		aux= vetor[i];
		j= i-1;
		while(j>=0 && vetor[j]>aux){
			vetor[j+1]=vetor[j];
			vetor[j]= aux;
			j--;
		}
	}
	aux=vetor[0];
	vetor[0]=vetor[2];
	vetor[2]=aux;
	
	if(vetor[0]>=vetor[1]+vetor[2]){
		printf("NAO FORMA TRIANGULO\n");
	}else{
	 	if(vetor[0]*vetor[0]== ((vetor[1]*vetor[1])+(vetor[2]*vetor[2]))){
			printf("TRIANGULO RETANGULO\n");
		} 
		if(vetor[0]*vetor[0]> ((vetor[1]*vetor[1])+(vetor[2]*vetor[2]))){
			printf("TRIANGULO OBTUSANGULO\n");
		} 
		if(vetor[0]*vetor[0]< ((vetor[1]*vetor[1])+(vetor[2]*vetor[2]))){
			printf("TRIANGULO ACUTANGULO\n");
		} 
		if(vetor[0]==vetor[1]||vetor[1]==vetor[2]||vetor[2]==vetor[0]){
			if(vetor[0]==vetor[1]&&vetor[1]==vetor[2]){
				printf("TRIANGULO EQUILATERO\n");
			}else{
				printf("TRIANGULO ISOSCELES\n");
		}
	}
	}
	
return 0;
}
