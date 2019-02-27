//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int i, N, C;
	char a[100];
	
	cin >> C;
	
	for(i=0; i<C; i++){
		
		cin >> a >> N;
		
		if(strcmp(a, "Thor") != 0) cout << "N" << endl;
		else cout << "Y" << endl;
		
	}
	
	return 0;
	
}
