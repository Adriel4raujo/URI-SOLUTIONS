//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, y, sum, c;
	
	while(1){
		cin >> x;
		cin >> y;
		
		if(x<=0||y<=0)
			break;
		
		else if(x<y){
			sum = 0;
			for(c=x; c<y+1; c++){
				sum += c;
				cout << c << " ";
			}
			cout << "Sum=" << sum << endl;
		}
		
		else if(x>y){
			sum = 0;
			for(c=y; c<x+1; c++){
				sum += c;
				cout << c << " ";
			}
			cout << "Sum=" << sum << endl;
		}
	}	

return 0;
}
