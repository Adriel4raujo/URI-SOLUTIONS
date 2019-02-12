//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

	int N, i, soma1 = 0, soma2 = 1, f;
	
	cin >> N;
	
	for(i=0; i<N; i++){
	
		f = soma1 + soma2;
		
		if(i==N-1)
			cout << soma1 << endl;
		else
			cout << soma1 << " ";
		
		soma1 = soma2;
		soma2 = f;
		
	}

return 0;
}
