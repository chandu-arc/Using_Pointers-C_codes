// Factorial using Function Pointer

#include<stdio.h>

void fact(int);
void (*ptr)(int);

main()
{
	ptr = &fact;
	ptr(5);
}
void fact(int a)
{
	int fact=1;
	for(int i=1;i<=a;i++)
		fact = fact*i;
	printf("%d",fact);
}
