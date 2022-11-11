//Write a program to print the first N natural numbers;
#include<stdio.h>
int main()
{
	int i,n;
	printf("How many natural numbers you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	  printf("%d ",i);
	  
  return 0;	  
}
