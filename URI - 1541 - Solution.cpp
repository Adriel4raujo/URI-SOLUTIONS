//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int x, y, z, a;
	
	while(1){
	
		cin >> x;
		if(x==0)
			break;
			
		cin >> y;
		if(y==0)
			break;
			
		cin >> z;
		if(z==0)
			break;
			
		a = x*y*100/z;
		
		a = sqrt(a);
		
		cout << a << endl;
	}
	
	return 0;
	
}
