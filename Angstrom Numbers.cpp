#include<stdio.h>
int main()
{int a,b,c,d;
	for(a=0;a<=4;a++)
	{
		for(b=0;b<=9;b++)
	{
		for(c=0;c<=9;c++)
	{	
	if(100*a+10*b+1*c==a*a*a+b*b*b+c*c*c)
	{d=100*a+10*b+c;
	printf("\n%d",d);
	}
	}
}
}
}
	
