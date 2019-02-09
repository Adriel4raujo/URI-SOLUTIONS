#include <iostream>

using namespace std;

int main(){
	
	int x, y, temp, i;
	
	cin >> x >> y;
	
	if(x > y){
		temp = y;
		y = x;
		x = temp;
	}
	
	for(i=x+1; i<y; i++){
		
		if(i%5 == 2 || i%5 == 3)
			cout << i << endl;
		
	}
	
	return 0;
}
