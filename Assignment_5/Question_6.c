//Write a program to print the first N even natural numbers;
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many even natural numbers you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    printf("%d\n",i*2);
	
	return 0;
}
