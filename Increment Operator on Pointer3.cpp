//Increment Operator on Pointer
// ++*ptr (value changes)

#include<stdio.h>
main()
{
	int x = 5,y = 10;
	int *ptr = &y;
	int z = ++*ptr;
	printf("%u %u\n",&y,&x);
	printf("%d %u %d",z,ptr,*ptr);
}
