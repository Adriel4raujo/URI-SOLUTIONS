//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	double A[100];
	
	int i;
	
	for(i=0; i<100; i++)
		cin >> A[i];
	
	for(i=0; i<100; i++)
		if(A[i]<=10)
			cout << "A[" << i << "] = " << A[i] << endl;
	
	return 0;
	
}
