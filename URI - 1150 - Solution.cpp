//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

	int x, z, i, cont = 1;
	
	cin >> x >> z;
	
	while(1){
	
		if(x>=z) 
			cin >> z;
		else
			break;
	
	}
	
	i=x;
	
	while(1){
	
		x+=i;
		cont++;
		if(x>z)
			break;
		i++;
	
	}
	
	cout << cont << endl;
	
return 0;
}
