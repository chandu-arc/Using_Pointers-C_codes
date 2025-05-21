// Swap of two numbers using Function Pointer

#include<stdio.h>

void swap(int ,int);
void (*ptr)(int , int);

main()
{
	ptr = &swap;
	int a,b;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	ptr(a,b);
}
void swap(int a,int b)
{
	printf("before swaping a=%d\t b=%d\n",a,b);
	int temp = a;
	a = b;
	b = temp;
	printf("after swaping a=%d\t b=%d",a,b);
}
