//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, N, x, temp1, temp2=1;
	
	while(cin >> N){
	
		for(i=0, temp2=1; i<N; i++){
			
			cin >> x;
			
			if(x<10)
				temp1 = 1;
			else if(x>=10 & x<20)
				temp1 = 2;
			else if(x>=20)
				temp1 = 3;
			
			if(temp1>temp2)
				temp2 = temp1;
			
		}
			
		cout << temp2 << endl;
		
	}
	return 0;
	
}
