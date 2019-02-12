//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

	int x, i;

	while(1){
	
		cin >> x;
		
		if(x==0)
			break;
			
		for(i=1; i<=x; i++){
		
			if(i == x)
				cout << i << endl;
			else
				cout << i << " ";
		
		}
	}

return 0;
}
