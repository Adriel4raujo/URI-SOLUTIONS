//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	int i, x, y, z, w, a, b, c, d, e, f, g, h, l;
	double N;
	
	scanf("%lf\n", &N);
	
	l= N*100;
	
	x= l/10000;
	l= (l%10000);
	
	y= l/5000;
	l= l%5000;
	
	z= l/2000;
	l= l%2000;
	
	w= l/1000;
	l= l%1000;
	
	a= l/500;
	l= l%500;
	
	b=l/200;
	l= l%200;
	
	c= l/100;
	l= l%100;
	
	d= l/50;
	l= l%50;
	
	e= l/25;
	l= l%25;
	
	f= l/10;
	l= l%10;
	
	g= l/5;
	l= l%5;
	
	h= l/1;
	l= l%1;
	
	
	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", x);
	printf("%d nota(s) de R$ 50.00\n", y);
	printf("%d nota(s) de R$ 20.00\n", z);
	printf("%d nota(s) de R$ 10.00\n", w);
	printf("%d nota(s) de R$ 5.00\n", a);
	printf("%d nota(s) de R$ 2.00\n", b);

	
	printf("MOEDAS:\n");	
	printf("%d moeda(s) de R$ 1.00\n", c);
	printf("%d moeda(s) de R$ 0.50\n", d);
	printf("%d moeda(s) de R$ 0.25\n", e);
	printf("%d moeda(s) de R$ 0.10\n", f);
	printf("%d moeda(s) de R$ 0.05\n", g);
	printf("%d moeda(s) de R$ 0.01\n", h);

	
	
return 0;
}
