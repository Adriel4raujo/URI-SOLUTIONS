//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, y, z[101], i, cont=0;
	
	cin >> x >> y;
	
	for(i=0; i<y; i++){
		
		cin >> z[i];
		
		if(i>=1)
			if((z[i-1]-z[i])<=x & (z[i-1]-z[i])>=-x)
				cont++;
			
	}
	
	if(cont==y-1)	cout << "YOU WIN" << endl;
	else            cout << "GAME OVER" << endl;
	
	return 0;
	
}
