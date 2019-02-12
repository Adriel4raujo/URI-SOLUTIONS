//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int N, i;
	
	cin >> N;
	
	for(i=1; i<=N; i++){
		if(N%i == 0)
			cout << i << endl;
	}
	
	return 0;
}
