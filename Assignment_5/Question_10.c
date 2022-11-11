//Write a program to print a table of N;
#include<stdio.h>
int main()
{
	int i,n;
	printf("The table of which number you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	  {
	  	printf("%2dx%2d = %2d\n",n,i,n*i);
	  }
	return 0;
}
