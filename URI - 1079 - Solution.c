//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int N, i;
	
	double X, Y, Z, M;
	
	scanf("%d", &N);	

	for(i=0; i<N; i++){
		scanf("%lf %lf %lf", &X, &Y, &Z);
		M= ((X*2.0)+(Y*3.0)+(Z*5.0))/10.0;
		printf("%.1lf\n", M);
	}

return 0;
}
