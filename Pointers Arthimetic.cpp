// program to understand the Pointers Arthimetic

#include<stdio.h>
main()
{
	int x=5,y=10,z=20;
	int *ptr = &z;
	int *ptr1 = &x;
	printf("%u %u %u\n",&z,&y,&x);
	printf("%u %d\n",ptr,*ptr);
	ptr = ptr + 2;
	printf("%u %d\n",ptr,*ptr);
	ptr = ptr - 1;
	printf("%u %d\n",ptr,*ptr);
	printf("%u\n",ptr1 - ptr);
}
