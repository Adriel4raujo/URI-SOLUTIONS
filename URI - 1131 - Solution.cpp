#include <iostream>

using namespace std;

int main(){
	
	int i, g, x, vitI = 0, vitG = 0, empates = 0, grenais = 0;
	
	while(1){
		
		grenais++;
		
		cin >> i >> g;
		
		if(i>g)
			vitI++;
		
		else if(i==g)
			empates++;
			
		else
			vitG++;
			
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> x;
		
		if(x==2)
			break;
		
	}
	
	cout <<  grenais << " grenais" << endl;
	cout << "Inter:" << vitI << endl;
	cout << "Gremio:" << vitG << endl;
	cout << "Empates:" << empates << endl;
	
	if(vitI > vitG)
		cout << "Inter venceu mais" << endl;
		
	else if (vitI < vitG)
		cout << "Gremio venceu mais" << endl;
		
	else 
		cout << "Nao houve vencedor" << endl;
	
	return 0;
}
