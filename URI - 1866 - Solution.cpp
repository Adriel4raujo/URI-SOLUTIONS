//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, N, C;
	
	cin >> C;
	
	for(i=0; i<C; i++){
		
		cin >> N;
		if(N%2==0) cout << 0 << endl;
		else       cout << 1 << endl;
		
	}
	
	return 0;
	
}
