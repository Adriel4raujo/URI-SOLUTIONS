//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int a, i, o, x, y, sum;
	scanf("%d", &a);
	
	for(i=0; i<a; i++){
		
		sum = 0;
		scanf("%d %d", &x, &y);
		
		if(x == y)
			printf("%d\n", sum);
			
		else if(x > y){
		
			for(o=y+1; o<x; o++){
				if(o%2 == 1|| o%2 == -1){
					sum += o;
				}				
			}
			printf("%d\n", sum);
			
		}
		
		else if(y > x){
		
			for(o=x+1; o<y; o++){
				if(o%2 == 1|| o%2 == -1){
					sum += o;
				}				
			}	
			printf("%d\n", sum);
			
		}
		
	}
	
return 0;
}
