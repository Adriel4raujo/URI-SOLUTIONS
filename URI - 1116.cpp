#include <iostream>

using namespace std;

int main(){
	
	int x, i;
	double y, z, a;
	
	cin >> x;
	
	for(i=0; i<x; i++)
	{
		
		cin >> y >> z;
		
		if(z==0)
		{
			cout << "divisao impossivel" << endl;
		} 
		
		else
		{
			a = y/z;
			printf("%.1f\n", a);
		}
	}
	
return 0;
}
