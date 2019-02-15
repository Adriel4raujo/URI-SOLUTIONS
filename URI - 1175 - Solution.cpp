//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, c, aux, A[20];
	
	for(i=0; i<20; i++)
		cin >> A[i];
	
	for(i=19, c=0; i>-1; i--, c++)
		cout << "N[" << c << "] = " << A[i] << endl;
	
	return 0;
	
}
