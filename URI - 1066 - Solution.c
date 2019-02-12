//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, x;
	int c2=0;
	int c3=0;
	int c4=0;
	int cont=0;
	
	for(i=0; i<5; i++){
		scanf("%d", &x);
		if((x%2)==0){

			cont++;
		}
		if((x%2)==1||(x%2)==-1){
			c2++;
		}
		
		if(x>0){
			c3++;
		}
		
		else if(x<0){
			c4++;
		}
	}
	
	printf("%d valor(es) par(es)\n", cont);
	printf("%d valor(es) impar(es)\n", c2);
	printf("%d valor(es) positivo(s)\n", c3);
	printf("%d valor(es) negativo(s)\n", c4);
	
return 0;
}
