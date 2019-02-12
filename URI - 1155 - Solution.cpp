//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	double s = 0, i;
	
	for(i=1; i<=100; i++)
		s += 1/i;
	
	printf("%.2f\n", s);
	
	return 0;
}
