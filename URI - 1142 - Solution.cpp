//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
 
using namespace std;
 
int main() {
 
 	int x, y, aux = 1, c;
 
    cin >> x >> y;
    
    while(1){
    	c=0;
    	while(c<x){
    		if(c!=x-1)
    			cout << aux << " ";
    		else
    			cout << aux << endl;
    			
    		if(aux == y-1)
    			break;
    		aux++;
    		c++;
		}
		
		if(aux == y-1)
			break;
	}
	
	cout << aux+1 << endl;
 
    return 0;
}
