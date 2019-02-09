#include <iostream>

using namespace std;

int main(){
	
	int x, y, i, soma;
	
	cin >> x >> y;
	
	if(x>y){
		soma = 0;
		for(i=y; i<=x; i++){
			if(i%13 != 0)
				soma += i;
		}
		cout << soma << endl;

	}
	else if(y>x){
		soma = 0;
		for(i=x; i<=y; i++){
			if(i%13 != 0)
				soma += i;
		}
		cout << soma << endl;

	}
	else{
		if(x%13==0 || y%13==0){
			cout << 0 << endl;
		}
		else
			cout << x << endl;
	}
	
	return 0;
}
