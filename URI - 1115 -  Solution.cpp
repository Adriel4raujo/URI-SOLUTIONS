//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, y;

	while(1){

		cin >> x >> y;

		if(x < 0){
			if(y<0)
				cout << "terceiro" << endl;
			
			else if(y==0)
				break;

			else
				cout << "segundo" << endl;
		}

		else if(x==0)
			break;

		else{
			if(y<0)
				cout << "quarto" << endl;

			else if(y==0)
				break;

			else
				cout << "primeiro" << endl;
		}

	}

return 0;
}
