//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(){
        int n,m,i,j,soma;
        int mat[100][100], N[100], M[100];
    
        do{
        int resul = 4;

        scanf("%d %d",&n, &m);

        if(n==0 && m==0){
                return 0;
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                scanf("%d",&mat[i][j]);
            }
        }


        
        for(i=0;i<n;i++){
            soma= 0;
            for(j=0;j<m;j++){
                if(mat[i][j] != 0){
                    soma++;
                }
            }
            N[i]= soma;
        }
        
        for(j=0;j<m;j++){
            soma= 0;
            for(i=0;i<n;i++){
                        
                if(mat[i][j]!=0){
                    soma++;
                        
                	}
                }
            M[j]= soma;
        }
        
        for(i=0;i<n;i++){
            if(N[i] == m){
                resul--;
                break;
            }
        }
        
        for(i=0;i<m;i++){
            if(M[i] == 0){
                resul--;
                break;
            }
        }
        
        for(i=0;i<m;i++){
            if(M[i] == n){
                resul--;
                break;
            }
        }
        
        for(i=0;i<n;i++){
        	if(N[i] == 0){
                resul--;
                break;
            }
        }
        printf("%d\n",resul);

        }while(n!=0 && m!=0);

return 0;
}
