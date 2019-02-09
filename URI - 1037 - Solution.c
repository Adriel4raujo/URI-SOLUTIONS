//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A;
	
	scanf("%lf\n", &A);
	
	if(A>100||A<0){
		printf("Fora de intervalo\n");
	}else{
		if(A>=0&&A<=25){
			printf("Intervalo [0,25]\n");
		}else if(A>25&&A<=50){
			printf("Intervalo (25,50]\n");
		}else if(A>50&&A<=75){
			printf("Intervalo (50,75]\n");
		}else if(A>75&&A<=100){
			printf("Intervalo (75,100]\n");
		}
	}
	
return 0;
}
