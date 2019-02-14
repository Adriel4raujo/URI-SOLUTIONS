#include <iostream>

using namespace std;

int main(){

	int x, y, z, i, c;
	
	double a, b;
	
	cin >> x;
	
	for(i=0; i<x; i++){
	
		cin >> y >> z;
		cin >> a >> b;
		
		c=0;
		
		while(y <= z){
			
			c++;
						
			y += (y*a)/100;
			z += (z*b)/100;
				
			if(c>100){
				cout << "Mais de 1 seculo." << endl;
				break;
			}
			
		}
		
		if(c <= 100)
				cout << c << " anos." << endl;
			
	
		}

return 0;
}
