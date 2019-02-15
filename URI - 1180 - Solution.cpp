//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, N, menor, pos;
	
	cin >> N;
	
	int X[N];
	
	for(i=0; i<N; i++){
		cin >> X[i];
		
		if(i==0){
			menor = X[i];
			pos = i;
		}
		else
			if(X[i] < menor){
				menor = X[i];
				pos = i;
			}
	}
	
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << pos << endl;
	
	return 0;
	
}
