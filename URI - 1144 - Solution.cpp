#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, i;
    
    cin >> x;
    
    for(i=1; i<x+1; i++){
    	cout << i << " " << i*i << " " << i*i*i << endl;
    	cout << i << " " << i*i+1 << " " << i*i*i+1 << endl;
	}
 
    return 0;
}
