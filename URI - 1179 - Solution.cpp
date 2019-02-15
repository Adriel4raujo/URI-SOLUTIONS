//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, c, k, l, X[5], Y[5], z;
	
	for(i=0, k=0, l=0; i<15; i++){
		
		cin >> z;
		
		if(z%2==0){
			X[k] = z;
			k++;
			if(k>=5){
				for(c=0; c<k; c++)
					cout << "par[" << c << "] = " << X[c] << endl;

				k=0;
			}
		}
		
		else{
			Y[l] = z;
			l++;
			if(l>=5){
				for(c=0; c<l; c++)		
					cout << "impar[" << c << "] = " << Y[c] << endl;
					
				l=0;
			}
		}
		
	}
	
	for(c=0; c<l; c++)			
		cout << "impar[" << c << "] = " << Y[c] << endl;
		
	for(c=0; c<k; c++)
		cout << "par[" << c << "] = " << X[c] << endl;

	
	return 0;
	
}
