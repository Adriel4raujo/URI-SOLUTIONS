//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	long long int x, i, c, z, p, s, f;
	
	cin >> x;
	
	for(i=0; i<x; i++){
		
		cin >> z;
		
		p=0;
		s=1;
		
		for(c=0; c<z; c++){
		
			f = p + s;
			p = s;
			s = f;
			
		}
		
		cout << "Fib(" << z << ") = " << p << endl;
		
	}
	
	return 0;
	
}
