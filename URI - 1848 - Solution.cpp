//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int i=1, soma=0;
	char c[100];
	
	while(1){
		
    	gets(c);
    	
    	if(strcmp(c, "*--") == 0)      soma+=4;
    	else if(strcmp(c, "**-") == 0) soma+=6;
    	else if(strcmp(c, "***") == 0) soma+=7;
    	else if(strcmp(c, "-*-") == 0) soma+=2;
    	else if(strcmp(c, "--*") == 0) soma+=1;
    	else if(strcmp(c, "---") == 0) soma+=0;
    	else if(strcmp(c, "-**") == 0) soma+=3;
    	else if(strcmp(c, "*-*") == 0) soma+=5;
		else if(strcmp(c, "caw caw") == 0){
			cout << soma << endl;
			soma = 0;
			i++;
			if(i>=4) break;
		}
		
	}
	
	return 0;
	
}
