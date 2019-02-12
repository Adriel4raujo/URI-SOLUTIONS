//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int A, B, C, D, total1, total2, total, totalh, totalmin;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	A=A*60;
	C=C*60;
	
	total1= A+B;
	total2= C+D;
	
	if(total2<=total1){
		total2= total2+(24*60);
		total= total2-total1;
		totalh= total/60;
		totalmin= total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalmin);
	}else{
		total= total2-total1;
		totalh= total/60;
		totalmin= total%60;
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalmin);
		
	}
return 0;
}
