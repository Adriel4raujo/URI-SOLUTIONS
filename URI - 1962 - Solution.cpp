//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, y, i, ano;
	
	cin >> x;
	
	for(i=0; i<x; i++){
		
		cin >> y;
		
		ano = 2015 - y;
		
		if(ano<=0){
			
			if(ano<0){
		    	ano *= -1;
		    	ano++;
		    }
			if(ano==0) ano = 1;
			
			cout << ano << " A.C." << endl;
		}
		
		else cout << ano << " D.C." << endl;
		
	}
	
	return 0;
	
}
