//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){

	double x, y, media;
	int z;

	while(1){

		cin >> x;

		if(x>10 || x<0)
			cout << "nota invalida" << endl;
		
		else{

			while(1){
				cin >> y;

				if(y>10 || y<0)
					cout << "nota invalida" << endl;
				
				else{
					if((y>=0 & y<=10) & (x>=0 & y<=10)){
						media = (x+y)/2;
						printf("media = %.2f\n", media);
						break;
					}
				}
			}

			while(1){
				cout << "novo calculo (1-sim 2-nao)" <<	endl;
				cin >> z;

				if(z==1||z==2)
					break;

			}

			if(z==2)
				break;
			

		}

	}

return 0;
}
