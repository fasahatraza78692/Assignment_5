//Write a program to print the first N odd natural numbers in reverse order;
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("How many odd natural numbers you want to print in revers order\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	    {
	    	printf("%d\n",i*2-1);
		}
	return 0;
}
