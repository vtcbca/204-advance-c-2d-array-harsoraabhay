#include<stdio.h>
#include<conio.h>
void sum(int[]);
void main()
{
	int i,a[5];
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("enter a number: ");
		scanf("%d",&a[i]);
	}
	sum(a);
	getch();
}
void print(int x[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	    sum=sum+x[i];
       printf("\nthe sum is: ");
       printf("%d",sum);
}

