//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int x, y, z, f, s;
	
	cin >> x >> y >> z;
	
	if ((x<0) & (y>0)){
    	x=x*-1;
    	f=x+y;
    }
	else if ((x>0) & (y<0)){
    	y=y*-1;
    	f=(x+y)*-1;
	}
	else f= y-x;
	
	if ((y<0) & (z>0)){
    	y=y*-1;
    	s=(y+z);
    }
	else if ((y>0) & (z<0)){
    	z=z*-1;
    	s=(y+z)*-1;
	}
	else s= z-y;
		
	if ((f<0) & (s>=0))
    	cout << ":)" << endl;

	else if ((f>0) & (s<=0))
  	  	cout << ":(" << endl;

	else if ((f>0) & (s>0)){
 	    if (f>s)
   	     	cout << ":(" << endl;
   		else if (f<=s)
        	cout << ":)" << endl;
    }
    
	else if ((f<0) & (s<0)){
  	    if (f<s)
     	    cout << ":)" << endl;
  	    else if (f>=s)
        	cout << ":(" << endl;
    }
 
	else if (f==0){
  	    if (s>0)
     	    cout << ":)" << endl;
    	else if (s<=0)
        	cout << ":(" << endl;
    }
    
	return 0;
	
}
