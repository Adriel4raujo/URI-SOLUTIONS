#include<conio.h>
#include<stdio.h>
 
int main(){
	int x,y,q,r;
    scanf("%d%d",&x,&y);	
    
    q=x/y;
    r=x%y;
    if(r<0){
    	if(q<0)
    	    q--;
        if(q>0)
            q++;
        r=x-(y*q);  
    }
    printf("%d %d\n",q,r);
	getch();
	
}
