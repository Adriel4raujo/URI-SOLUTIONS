//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double X, Y;
	
	scanf("%lf %lf\n", &X, &Y);
	
	if(X>0&&Y>0){
		printf("Q1\n");
	}else if(X>0&&Y<0){
		printf("Q4\n");
	}else if(X<0&&Y>0){
		printf("Q2\n");
	}else if(X<0&&Y<0){
		printf("Q3\n");
	}else if(X==0&&Y==0){
		printf("Origem\n");
	}else if(X==0&&(Y>0||Y<0)){
		printf("Eixo Y\n");
	}else if((X>0||X<0)&&Y==0){
		printf("Eixo X\n");
	}
return 0;
}
