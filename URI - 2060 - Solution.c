//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int P, N, i;
	int cont2=0;
	int cont3=0;
	int cont4=0;
	int cont5=0;
	
	scanf("%d", &N);
	
	for(i=0; i<N; i++){
		scanf("%d", &P);
		if(P%2==0){
			cont2++;
		}if(P%3==0){
			cont3++;
		}if(P%4==0){
			cont4++;
		}if(P%5==0){
			cont5++;
		}
		P=0;
	}
	

		printf("%d Multiplo(s) de 2\n", cont2);
		printf("%d Multiplo(s) de 3\n", cont3);
		printf("%d Multiplo(s) de 4\n", cont4);
		printf("%d Multiplo(s) de 5\n", cont5);
	
return 0;
}
