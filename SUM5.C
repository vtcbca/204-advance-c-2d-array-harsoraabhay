#include<stdio.h>
#include<conio.h>
void input();
void sum(int[]);
void main()
{
	int a[5];
	clrscr();
	input();
	getch();
}
void input(int a[])
{	
	int i;
	for(i=0;i<5;i++)
	{
		printf("\nEnter A Number: ");
		scanf("%d",&a[i]);
	}
	sum(a);
}
void print(int a[])
{
	int i,j=0;
	for(i=0;i<5;i++)
	    j=j+a[i];
       		printf("\n\t\tThe Sum Is %d: ",j);
}

