#include <iostream>

using namespace std;

int main(){
	
	int x, i, c, soma, y, z;
	
	cin >> x;
	
	for(i=0; i<x; i++){
		
		cin >> y >> z;
		
		soma = 0;
		
		if((y%2)==0)
			y++;
		
		for(c=0; c<z; c++){
			
			soma += y;
			y += 2;
		}
		
		cout << soma << endl;
				
	}
	
	return 0;
}
