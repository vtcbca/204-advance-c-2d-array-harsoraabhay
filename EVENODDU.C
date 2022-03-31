/*write a program is a even number and odd number using user define function
author=harsora abhay shantibhai
date=31-3-22*/
#include<stdio.h>
#include<conio.h>
void ode();
void main()
{
	clrscr();
	ode();
	getch();
}
void ode()
{
	int a;
	printf("enter any integer value: ");
	scanf("%d",&a);

	if(a%2==0)
	{
		printf("%d is a even number",a);
	}
	else
	{
		printf("%d is a odd number",a);
	}
}