//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x[100], i, y, z, m=20, aux;
	
	cin >> y;
	
	for(i=0; i<y; i++){
		
		cin >> z;
		if(z<m){
			m=z;
			aux=i+1;
		}
		
	}
	
	cout << aux << endl;
	
	return 0;
	
}
