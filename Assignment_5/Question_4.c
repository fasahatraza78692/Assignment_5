//Write a program to print the first N odd natural numbers;
#include<stdio.h>
int main()
{
	int i=1,n;
	printf("How many odd natural numbers you wnat to print\n");
    scanf("%d",&n);
	while(i<=n)
	    {
	    	printf("%d\n",i*2-1);
	    	i++;
		}
	return 0;
}
