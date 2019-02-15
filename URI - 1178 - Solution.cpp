//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	double X[100];
	int i;
	
	cin >> X[0];
	
	for(i=0; i<100; i++){
	
		if(i>0)
			X[i] = (X[i-1])/2;
			
		printf("N[%d] = %.4f\n", i, X[i]);
		
	}
	
	return 0;
	
}
