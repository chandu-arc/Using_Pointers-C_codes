// In pointers Example for Dereferencing Pointer Operator 

#include<stdio.h>

main()
{
	int x = 3;
	float y = 4.5;
	char z = 'A';
	
	int *ptr = &x;
	float *ptr1 = &y;
	char *ptr2 = &z;
	
	printf("%u %d\n",ptr,*ptr);
	printf("%u %f\n",ptr1,*ptr1);
	printf("%u %c\n",ptr2,*ptr2);
	
}
