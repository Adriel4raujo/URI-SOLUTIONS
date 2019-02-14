//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define Z 2001
#include <string.h>

int main(){
    int X,n,i, j;
    int vetor[Z];
    while(scanf("%d",&X)==1){
        memset(vetor,0,sizeof vetor);
 
        for(i=0;i<X;i++){
            scanf("%d", &n);
            vetor[n]++;
        }
        
        for(i=0;i<Z;i++){
        	for(j=0;j<vetor[i];j++){
 				if(vetor[i]>0){
            	printf("%d aparece %d vez(es)\n", i, vetor[i]);
            	}
            	break;
        	}
        }
 
    }
    
return 0;
}
