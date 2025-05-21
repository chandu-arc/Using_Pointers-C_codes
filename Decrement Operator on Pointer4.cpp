//Decrement Operator on Pointer
// (*ptr)-- (Value changes)

#include<stdio.h>
main()
{
	int x = 5,y = 10;
	int *ptr = &x;
	int z = (*ptr)--;
	printf("%u %u\n",&x,&y);
	printf("%d %u %d",z,ptr,*ptr);
}
