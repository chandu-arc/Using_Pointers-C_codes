// Viod pointer example

#include<stdio.h>
main()
{
	int a;
	float b;
	printf("Enter a,b values:");
	scanf("%d %f",&a,&b);
	
	void *ptr = &a;
	printf("%d\n",*(int*)ptr);
	void *ptr1 = &b;
	printf("%f\n",*(float*)ptr1);
}
