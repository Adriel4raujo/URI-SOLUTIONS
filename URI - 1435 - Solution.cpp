//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int N, i, c, j, h;
	
	while(1){
		
		cin >> N;
		
		int A[N][N], k=0, l=0;
		
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
			
			for(i=0; i<h; i++){
				for(c=k; c<N-k; c++)
					for(j=l; j<N-l; j++)
						A[c][j] += 1;
				
				k++;
				l++;
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
