

#include <stdio.h>

int main (){
	
	int dia, hora, min, seg, dia2, hora2, min2, seg2, tempo, tempo2;

	scanf("%*s %d", &dia);
	
	scanf("%d %*s", &hora);
	scanf("%d %*s", &min);
	scanf("%d ", &seg);
	
	scanf("%*s %d", &dia2); 
	
	scanf("%d %*s", &hora2);
	scanf("%d %*s", &min2);
	scanf("%d ", &seg2);
	
	min=min*60;
	hora=hora*60*60;
	dia=dia*60*60*24;
	
	seg2=seg2;
	min2=min2*60;
	hora2=hora2*60*60;
	dia2=dia2*60*60*24;
	
	tempo=seg+min+hora+dia;
	tempo2=seg2+min2+hora2+dia2;
	
	tempo= tempo2-tempo;
	
	dia= tempo/(60*60*24);
	hora= (tempo%(60*60*24))/(60*60);
	min= ((tempo%(60*60*24))%(60*60))/60;
	seg= (((tempo%(60*60*24))%(60*60)))%60;
	
	printf("%d dia(s)\n", dia);
	printf("%d hora(s)\n", hora);
	printf("%d minuto(s)\n", min);
	printf("%d segundo(s)\n", seg);
	
	
return 0;
}
