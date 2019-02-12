//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i;
	
	int cont=0;
	
	double x;
	for(i=0; i<6; i++){
		scanf("%lf", &x);
		if(x>0){
			cont++;
		}
	}
	
	printf("%d valores positivos\n", cont);
	
	
return 0;
}
