//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, i, c, X[1000];
	
	cin >> x;
	
	for(i=0, c=0; i<1000; i++, c++){
			if(c>=x)
				c=0;
			
			X[i] = c;
			
	}
	for(i=0; i<1000; i++)
		cout << "N[" << i << "] = " << X[i] << endl;

	
	return 0;
	
}
