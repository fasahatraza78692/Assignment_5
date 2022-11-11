//Write a program to print the first N even natural numbers in reverse order;
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many even natural numbers you want to print in reverse order\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	    printf("%d\n",i*2);
	
	return 0;
}
