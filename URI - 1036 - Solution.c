//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

int main (){
	
	double A, B, C, D, X1, X2;
	
	scanf("%lf %lf %lf\n", &A, &B, &C);
	
	D= (B*B)- (4*A*C);
	
	if(A==0){
		printf("Impossivel calcular\n");
	}else if(D<0){
		printf("Impossivel calcular\n");
	}else{
		X1= (-B + sqrt(D))/(2.0*A);
		X2= (-B - sqrt(D))/(2.0*A);
		
		printf("R1 = %.5lf\n", X1);
		printf("R2 = %.5lf\n", X2);
	}
	
	
return 0;
}
