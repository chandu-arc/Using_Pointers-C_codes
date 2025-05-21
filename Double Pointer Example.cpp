// Double Pointer Example

#include<stdio.h>
main()
{
	int a;
	printf("Enter a values:");
	scanf("%d",&a);
	
	int *ptr = &a;
	int **ptr1 = &ptr;
	printf("%u %u %u %d %d",ptr,ptr1,*ptr,*ptr1,**ptr1);
}
