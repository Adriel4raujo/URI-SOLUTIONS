//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int N, i, c, j, h, m, A[101][101], x;
	
	while(cin >> N){
		
		h = N/3;
		x = N/2;
		i = N-h;
		
		for(c=0; c<N; c++)
			for(j=0; j<N; j++)
				A[c][j] = 0;

		for(c=0, m=1; c<N; c++, m++)
			for(j=0; j<N; j++){
				if(c==x & j==x)
					A[c][j] = 4;
				else if((c>=h & c<i) & (j<i & j>=h))
					A[c][j] = 1;
				else if(c==j & A[c][j]==0)
					A[c][j] = 2;
				else if(j==(N-m))
					A[c][j] = 3;
			}

		for(c=0; c<N; c++)
			for(j=0; j<N; j++)
				if(j<N-1)
					cout << A[c][j];
				else if(j==N-1)
					cout << A[c][j] << endl;
			
		cout << endl;
		
	}
	
	return 0;
	
}
