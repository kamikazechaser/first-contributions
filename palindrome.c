#include<stdio.h>
int main()
{
	int n,originalinteger,reverseinteger=0,r;
	printf("enter the number");
	scanf("%d",&n);
	originalinteger=n;
	while(n!=0)
	{
		r=n%10;
		reverseinteger=reverseinteger*10+r;
		n=n/10;
		
	}
	if(originalinteger==reverseinteger)
	printf("palindrome");
	else
     printf("not palindrome");
     return 0;
     
}
