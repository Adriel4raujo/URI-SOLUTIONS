#include <iostream>

using namespace std;

int main(){
	
	int c, x, i, y, a;
	
	cin >> x;
	
	for(i=0; i<x; i++){
		
		cin >> y;
		
		a=0;
		
		for(c=1; c<=y; c++){
			
			if(y%c==0)
				a++;
			
		}
		
		if(a==2)
			cout << y << " eh primo" << endl;
		else
			cout << y << " nao eh primo" << endl;
	}
	
	return 0;
}
