//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int x, y, z, i, sum;
	
	char n1[100], n2[100];
	char P[6], I[6];
	
	cin >> z;
	
	for(i=0; i<z; i++){
		
		cin >> n1 >> P >> n2 >> I;
		cin >> x >> y;
		
		sum = x + y;
		
		if(strcmp(P, "PAR")==0)
			if(sum%2==0) cout << n1 << endl;
			else         cout << n2 << endl;
		
		else
			if(sum%2==0) cout << n2 << endl;
			else         cout << n1 << endl;
		
	}
	
	return 0;
	
}
