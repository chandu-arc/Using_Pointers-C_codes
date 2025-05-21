// Prime or Not using Function Pointer

#include<stdio.h>
void prime(int);
void (*ptr)(int);
main()
{
	ptr = &prime;
	ptr(11);
}
void prime(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			count++;
		}
	}
	if(count == 2)
		printf("Prime");
	else
		printf("Not a prime");
}
