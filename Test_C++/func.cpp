#include <stdio.h>

int t(int &x,int &y,int &cp,int& dp)
//int t(int x,int y,int cp,int dp)
{	cp=x*x+y*y;
	dp=x*x-y*y;
}
int main()
{ 
	int a=4,b=3,c=5,d=6;
	t(a,b,c,d);
    printf("%d  %d\n",c,d);  
    return 0;
}


