#include <iostream>

using namespace std;

int main(){
	
	double s = 0, x=1, z=1;
	
	while(1){
	//for(i=1; i<=100; i++){
			
		s += x/z;
		
		if(x==39)
			break;
		
		x += 2;
		z *= 2;
		
	}
	
	printf("%.2f\n", s);
	
	return 0;
}
