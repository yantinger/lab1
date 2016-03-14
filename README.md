#include<iostream>
#include<cstdio>
int main()
{
	int n;
	printf("please enter an integer:");
	scanf("%d",&n);
	printf("\n");
	while(n>=2)//若n<=1跳出loop
	{
		int a;
		a=(n)%2;//a是n除2的餘數
		if(a==0)//a=0表n為偶數
		{
			n=0.5*n;
			printf("%d ",n);
		}
		if(a==1)//a=1表n為奇數
		{   
			n=3*n+1;
			printf("%d ",n);                
		}
	}
	printf("\n");
	return 0; 
}
