//Write a program to print cubes of the first N natural numbers;
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many natural numbers's cubes you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  {
	  	printf("%d ",i*i*i);
	  }
	return 0;
}
