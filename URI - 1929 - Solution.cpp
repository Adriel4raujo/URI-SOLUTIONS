//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

#include <iostream>

using namespace std;

int main(){
	
	int a, b, c, d, sub1, sub2, sub3, sum1, sum2, sum3, cont=0, x=0;
	
	cin >> a >> b >> c >> d;
	
	sub1 = a - b;
	sub2 = a - c;
	sub3 = b - c;
	sum1 = a + b;
	sum2 = a + c;
	sum3 = b + c;
	
	if(sub1<0) sub1 *= -1;
	if(sub2<0) sub2 *= -1;
	if(sub3<0) sub3 *= -1;
	
	if(sub1<c & c<sum1) cont++;
	if(sub2<b & b<sum2) cont++;
	if(sub3<a & a<sum3) cont++;
	
	if(cont==3) x++;
	cont = 0;
	
	sub1 = d - b;
	sub2 = d - c;
	sub3 = b - c;
	sum1 = d + b;
	sum2 = d + c;
	sum3 = b + c;
	
	if(sub1<0) sub1 *= -1;
	if(sub2<0) sub2 *= -1;
	if(sub3<0) sub3 *= -1;
	
	if(sub1<c & c<sum1) cont++;
	if(sub2<b & b<sum2) cont++;
	if(sub3<d & d<sum3) cont++;
	
	if(cont==3) x++;
	cont = 0;
	
	sub1 = d - a;
	sub2 = d - c;
	sub3 = a - c;
	sum1 = d + a;
	sum2 = d + c;
	sum3 = a + c;
	
	if(sub1<0) sub1 *= -1;
	if(sub2<0) sub2 *= -1;
	if(sub3<0) sub3 *= -1;
	
	if(sub1<c & c<sum1) cont++;
	if(sub2<a & a<sum2) cont++;
	if(sub3<d & d<sum3) cont++;
	
	if(cont==3) x++;
	cont = 0;
	
	sub1 = d - a;
	sub2 = d - b;
	sub3 = a - b;
	sum1 = d + a;
	sum2 = d + b;
	sum3 = a + b;
	
	if(sub1<0) sub1 *= -1;
	if(sub2<0) sub2 *= -1;
	if(sub3<0) sub3 *= -1;
	
	if(sub1<b & b<sum1) cont++;
	if(sub2<a & a<sum2) cont++;
	if(sub3<d & d<sum3) cont++;
	
	if(cont==3) x++;
	cont = 0;
	
	if(x>0) cout << "S" << endl;
	else    cout << "N" << endl;
	
	return 0;
	
}
