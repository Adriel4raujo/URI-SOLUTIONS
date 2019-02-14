#include <iostream>

using namespace std;

int main(){
	
	int n, x, i, c, soma;

	cin >> n;

	for(i=0; i<n; i++){

		cin >> x;
		soma = 0;

		for(c=1; c<x; c++)
		
			if(x%c==0)
				soma += c;
		
		if(soma == x)
			cout << x << " eh perfeito" << endl;
		else 
			cout << x << " nao eh perfeito" << endl;

	}

	return 0;
}
