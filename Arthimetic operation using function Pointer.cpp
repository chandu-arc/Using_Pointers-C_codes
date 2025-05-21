// Arthimetic operation using Function Pointer

#include<stdio.h>

void sum(int ,int);
void sub(int ,int);
void mul(int ,float);
void (*ptr)(int , int);
void (*ptr1)(int , float);
main()
{
	ptr = &sum;
	ptr(3,4);
	ptr = &sub;
	ptr(3,4);
	ptr1 = &mul;
	ptr1(3,4);
}
void sum(int a,int b)
{
	printf("%d\n",a+b);
}
void sub(int a,int b)
{
	printf("%d\n",a-b);
}
void mul(int a,float b)
{
	printf("%f\n",a*b);
}
