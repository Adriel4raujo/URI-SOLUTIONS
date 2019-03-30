//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, i, n, y;
	double z,  m=0;

	cin >> x;

	for(i=0; i<x; i++){

		cin >> y;
		cin >> z;

		if(z>m){
			n = y;
			m = z;
		}

	}

	if(m>=8.0)
		cout << n << endl;
	else 
		cout << "Minimum note not reached" << endl;

	return 0;
}