//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int i, c, N;
	char z;
	double X[12][12], soma=0;
	
	cin >> N;
	cin >> z;
	
	for(i=0; i<12; i++)
		for(c=0; c<12; c++)
			cin >> X[i][c];
			
	switch(z){
		
		case 'S':
			for(c=0; c<12; c++)		
				soma += X[N][c];
				
			printf("%.1f\n", soma);
			break;
		
		case 'M':
			for(c=0; c<12; c++)		
				soma += X[N][c];
				
			printf("%.1f\n", soma/12);
			break;
			
	}
	
	return 0;
	
}
