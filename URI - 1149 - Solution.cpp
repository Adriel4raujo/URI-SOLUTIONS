//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

	int A, N, i, soma =0;
	
	cin >> A >> N;
	
	while(1){
		
		if(N<=0)
			cin >> N;
		else
			break;
	
	}
	
	for(i=0; i<N; i++){
	
		soma += A+i;
	
	}
	
	cout << soma << endl;

return 0;
}
