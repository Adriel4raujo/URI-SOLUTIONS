//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	double x, y, p, s;
	
	cin >> x >> y;
	
	s = y - x;
	
	p = (100*s)/x;
	
	printf("%.2f%\n", p);
	
	return 0;
	
}
