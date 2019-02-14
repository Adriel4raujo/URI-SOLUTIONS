#include <iostream>

using namespace std;

int main(){
	
	int i, x[10];
	
	cin >> x[0];
	
	for(i=1; i<10; i++)
		x[i] = x[i-1]*2;
	
	for(i=0; i<10; i++)
		cout << "N[" << i << "] = " << x[i] << endl;
	
	return 0;
	
}
