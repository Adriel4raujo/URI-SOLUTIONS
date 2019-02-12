//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main (){
	
	char vet[15];
	char vet1[15];
	char vet2[15];
	
	scanf("%s", &vet);
	scanf("%s", &vet1);
	scanf("%s", &vet2);
	
	if(vet[0]=='v'){
		if(vet1[0]=='a'){
			if(vet2[0]=='c'){
				printf("aguia\n");
			}
			else{
				printf("pomba\n");
			}
		}
		else{
			if(vet2[0]=='o'){
				printf("homem\n");
			}
			else{
				printf("vaca\n");
			}
		}
	}
	else{
		if(vet1[0]=='i'){
			if(vet2[2]=='m'){
				printf("pulga\n");
			}
			else if(vet2[2]=='r'){
				printf("lagarta\n");
			}
		}
		else{
			if(vet2[0]=='h'){
				printf("sanguessuga\n");
			}
			else{
				printf("minhoca\n");
			}
		}
	}
	
return 0;
}
