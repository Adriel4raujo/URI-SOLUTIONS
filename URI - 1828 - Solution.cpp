//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cstring>

using namespace std;

int main(){
	
	int N, i, a, b;
	
	char x[20], y[20];
	
	cin >> N;
	
	for(i=0; i<N; i++){
	
		cin >> x >> y;
		
		if(strcmp(x, "pedra") == 0) a=0;
		else if(strcmp(x, "papel") == 0) a=1;
		else if(strcmp(x, "tesoura") == 0) a=2;
		else if(strcmp(x, "lagarto") == 0) a=3;
		else if(strcmp(x, "Spock") == 0) a=4;
		
		if(strcmp(y, "pedra") == 0) b=0;
		else if(strcmp(y, "papel") == 0) b=1;
		else if(strcmp(y, "tesoura") == 0) b=2;
		else if(strcmp(y, "lagarto") == 0) b=3;
		else if(strcmp(y, "Spock") == 0) b=4;
		
		
		switch(a){
			
			case 0: //Pedra
				switch(b){
					
					case 1: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break;
					case 2: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break;
					case 3: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break;
					case 4: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break;
					case 0: cout << "Caso #" << i+1 << ": De novo!" << endl;       break;
						
				}
				break;
				
			case 1: //Papel
				switch(b){
					
					case 0: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break;
					case 2: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break;
					case 3: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break;
					case 4:	cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break;
					case 1: cout << "Caso #" << i+1 << ": De novo!" << endl;       break;
						
				}
				break;
				
			case 2: //Tesoura
				switch(b){
					
					case 1: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break;
					case 0: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break;
					case 3: cout << "Caso #" << i+1 << ": Bazinga!" << endl; break;
					case 4: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl;       break;
					case 2: cout << "Caso #" << i+1 << ": De novo!" << endl;       break;
						
				}
				break;
				
			case 3: //Lagarto
				switch(b){
					
					case 1: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break; //Papel
					case 2: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break; //Tesoura
					case 0: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break; //Pedra
					case 4: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break; //Spock
					case 3: cout << "Caso #" << i+1 << ": De novo!" << endl;       break; //Lagarto
						
				}
				break;
				
			case 4: //Spock
				switch(b){
					
					case 1: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break; //Papel
					case 2: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break; //Tesoura
					case 3: cout << "Caso #" << i+1 << ": Raj trapaceou!" << endl; break; //Lagarto
					case 0: cout << "Caso #" << i+1 << ": Bazinga!" << endl;       break; //Pedra
					case 4: cout << "Caso #" << i+1 << ": De novo!" << endl;       break; //Spock
						
				}
				break;
		}
		
	}
	
	return 0;
	
}
