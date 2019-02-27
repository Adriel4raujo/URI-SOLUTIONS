//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int N, i, c, j, h, m;
	
	while(1){
		
		cin >> N;
		
		int A[N][N];
		
		for(c=0; c<N; c++)
			for(j=0; j<N; j++)
				A[c][j] = 0;
		
		if(N==0)
			break;
		
		else{
		
			if(N%2==0)
				h = N/2;
			
			else
				h = (N/2) + 1;
			
			for(i=0; i<h; i++)
				for(c=k; c<N; c++)
					for(j=l, m=1; j<N; j++, m++){
						A[c][j] = m;
						A[j][c] = m;
					}

			for(c=0; c<N; c++){
				for(j=0; j<N; j++){
					if(j<N-1)
						printf("%3d ", A[c][j]);
					else if(j==N-1)
						printf("%3d", A[c][j]);
					
				}
				cout << endl;
			}
			
			cout << endl;
			
		}
		
	}
	
	return 0;
	
}
