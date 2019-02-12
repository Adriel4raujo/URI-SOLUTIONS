//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, soma, c;
	
	while(1){
		
		soma = 0;
		
		cin >> x;
		
		if(x==0)
			break;
		
		if((x%2)!=0)
			x++;
		
		for(c=0; c<5; c++){
			
			soma += x;
			x += 2;
			
		}
		
		cout << soma << endl;
	}
	
	return 0;
}
