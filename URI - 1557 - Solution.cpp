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
		
		int A[15][15], k=0, l=0, m=1;
		
		for(c=0; c<N; c++)
			for(j=0; j<N; j++)
				A[c][j] = 1;
		
		if(N==0)
			break;
		
		else{
		
			if(N%2==0)
				h = N/2;
			
			else
				h = (N/2) + 1;
			
			for(i=0; i<h; i++){
				for(c=k; c<N; c++){
					for(j=l, m=1; j<N; j++, m++){
						if(c==0 & j==0) A[c][j] = 1;
						else{
							A[c][j] = 2*A[c][j-1];
							A[j][c] = 2*A[c][j-1];
						}
					}
					l++;
				}
				k++;
				
			}
			
			for(c=0; c<N; c++){
				for(j=0; j<N; j++){
					if(j<N-1)
						if(N==1|N==2)
							printf("%d ", A[c][j]);
						else if(N==3|N==4)
							printf("%2d ", A[c][j]);
						else if(N==5)
							printf("%3d ", A[c][j]);
						else if(N==6|N==7)
							printf("%4d ", A[c][j]);
						else if(N==8|N==9)
							printf("%5d ", A[c][j]);
						else if(N==10)
							printf("%6d ", A[c][j]);
						else if(N==12|N==11)
							printf("%7d ", A[c][j]);
						else if(N==14|N==13)
							printf("%8d ", A[c][j]);
						else if(N==15)
							printf("%9d ", A[c][j]);
							
					if(j==N-1)
						if(N==1|N==2)
							printf("%d", A[c][j]);
						else if(N==3|N==4)
							printf("%2d", A[c][j]);
						else if(N==5)
							printf("%3d", A[c][j]);
						else if(N==6|N==7)
							printf("%4d", A[c][j]);
						else if(N==8|N==9)
							printf("%5d", A[c][j]);
						else if(N==10)
							printf("%6d", A[c][j]);
						else if(N==12|N==11)
							printf("%7d", A[c][j]);
						else if(N==14|N==13)
							printf("%8d", A[c][j]);
						else if(N==15)
							printf("%9d", A[c][j]);
					
				}
				cout << endl;
			}
			
			cout << endl;
			
		}
		
	}
	
	return 0;
	
}
