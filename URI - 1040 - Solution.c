//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	double A, B, C, D, E, MEDIA;
	
	scanf("%lf %lf %lf %lf\n", &A, &B, &C, &D);
	
	MEDIA= ((A*2) + (B*3)+ (C*4) + D)/10.0;
	
	if(MEDIA<5.0){
		printf("Media: %.1lf\n", MEDIA);
		printf("Aluno reprovado.\n");
	}else if(MEDIA>7.0){
		printf("Media: %.1lf\n", MEDIA);
		printf("Aluno aprovado.\n");
	}else if(MEDIA<7.0&&MEDIA>=5.0){
		printf("Media: %.1lf\n", MEDIA);
		printf("Aluno em exame.\n");
		scanf("%lf", &E);
		printf("Nota do exame: %.1lf\n", E);
		MEDIA= (MEDIA+E)/2;
		if(MEDIA>=5){
			printf("Aluno aprovado.\n");
			printf("Media final: %.1lf\n", MEDIA);
		}else if(MEDIA<5){
			printf("Aluno reprovado.\n");
			printf("Media final: %.1lf\n", MEDIA);
		}
	}
	
return 0;
}
