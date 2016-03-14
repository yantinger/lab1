#include<iostream>
#include<cstdio>
int main()
{
	int n;
	printf("please enter an integer:");
	scanf("%d",&n);
	printf("\n");
	while(n>=2)
	{
		int a;
		a=(n)%2;
		if(a==0)
		{
			n=0.5*n;
			printf("%d ",n);
		}
		if(a==1)
		{   
			n=3*n+1;
			printf("%d ",n);                
		}
	}
	printf("\n");
	return 0; 
}
