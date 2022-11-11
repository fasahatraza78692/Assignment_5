// Write a program to print the first n natural numbers in reverse order;
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many natural numbers you want to print in reverse order\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	  {
	  	printf("%d ",i);
	  }
	return 0;
}
