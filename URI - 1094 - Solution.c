//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include "stdio.h"]

int main (){
	
	int N, i, aux, x, cont, c2;
	double per, per2, per3, total;
	
	cont=0;
	c2=0;
	x=0;
	scanf("%d", &N);	

	char c;
	for(i=0; i<N; i++){
		scanf("%d %c", &aux, &c);
		if(c=='C'){
			cont+= aux;
		}
		else if(c=='R'){
			x+= aux;
		}
		else if(c=='S'){
			c2+= aux;
		}
	}
	
	total= cont+x+c2;
	
	per= (cont*100)/total;
	per2= (x*100)/total;
	per3= (c2*100)/total;
	
	printf("Total: %.0lf cobaias\n", total);
	printf("Total de coelhos: %d\n", cont);
	printf("Total de ratos: %d\n", x);
	printf("Total de sapos: %d\n", c2);
	printf("Percentual de coelhos: %.2lf %%\n", per);
	printf("Percentual de ratos: %.2lf %%\n", per2);
	printf("Percentual de sapos: %.2lf %%\n", per3);
	
return 0;
}
