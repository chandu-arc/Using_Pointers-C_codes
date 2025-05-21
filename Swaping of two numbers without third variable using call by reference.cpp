// Pointers & Functions- Swaping of two numbers without third variable using call by reference 

#include<stdio.h>
void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	
	printf("after swaping a= %d\t b= %d\n",*a,*b);	
} 
main()
{
	int a,b;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	
	printf("Before swaping a= %d\t b= %d\n",a,b);
	swap(&a,&b);
	printf("a= %d\t b= %d\n",a,b);
}
