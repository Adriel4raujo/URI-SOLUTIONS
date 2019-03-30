//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x;

	cin >> x;

	while(x!=0)
		if(x>=1000){
			cout << "M";
		}
		else if(x>=500){
			if(x>=900){
				cout << "CM";
				x -= 900;
			}
			else{
				cout << "D";
				x -= 500;
			}
		}
		else if(x>=100){
			if(x>=400){
				cout << "CD";
				x -= 400;
			}
			else{
				cout << "C";
				x -= 100;
			}		
		}
		else if(x>=50){
			if(x>=90){
				cout << "XC";
				x -= 90;
			}
			else{
				cout << "L";
				x -= 50;
			}
			
		}
		else if(x>=10){
			if(x>=40){
				cout << "XL";
				x -= 40;
			}
			else{
				cout << "X";
				x -= 10;
			}
			
		}
		else if(x>=5){
			if(x>=9){
				cout << "IX";
				x -= 9;
			}
			else{
				cout << "V";
				x -= 5;
			}			
		}
		else if(x>=1){
			if(x>=4){
				cout << "IV";
				x -= 4;
			}
			else{
				cout << "I";
				x -= 1;
			}	
		}
	
	cout << endl;

	return 0;
}