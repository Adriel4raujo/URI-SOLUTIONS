//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int N, i, c, j, m, A[70][70];;
	
	while(scanf("%d",&N) != EOF){
		
		for(c=0, m=0; c<N; c++, m++)
			for(j=0; j<N; j++)
				if(j==N-1-c) 
					A[c][j] = 2;
				else if(c==j)
					A[c][j] = 1;
				else 
					A[c][j] = 3;	
		
		for(c=0; c<N; c++)
			for(j=0; j<N; j++)
				if(j<N-1)
					cout << A[c][j];
				else if(j==N-1)
					cout << A[c][j] << endl;
			
	}
	
	return 0;
	
}
