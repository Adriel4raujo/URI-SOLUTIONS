//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main() {
	int senha;
	int sistema;

	sistema = 2002;

	while (1){
		cin >> senha;
		if(senha == sistema){
			cout << "Acesso Permitido" << endl;
			break;
		}
		else{
			cout << "Senha Invalida" << endl;
		}
	}

}
