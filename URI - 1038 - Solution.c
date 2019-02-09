//////////////////////////////////////////////////////////////////////////////////
//                  Autor/Author: Adriel de Oliveira Araujo                     //
//           Universidade Estadual do Ceará / Ceara State University            //
//////////////////////////////////////////////////////////////////////////////////

int main (){
	
	int A, B;
	double TOTAL;
	
	scanf("%d %d\n", &A, &B);
	
	if(A==1){
		TOTAL=B*4;
		printf("Total: R$ %.2lf\n", TOTAL);
	}else if(A==2){
		TOTAL= B*4.50;
		printf("Total: R$ %.2lf\n", TOTAL);
	}else if(A==3){
		TOTAL= B*5;
		printf("Total: R$ %.2lf\n", TOTAL);
	}else if(A==4){
		TOTAL= B*2;
		printf("Total: R$ %.2lf\n", TOTAL);
	}else if(A==5){
		TOTAL= B*1.50;
		printf("Total: R$ %.2lf\n", TOTAL);
	}
	
return 0;
}
