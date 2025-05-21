// Pointer to Array - array pointer is a pointer it's stores the whole array address

#include<stdio.h>

main()
{
 
	int a[10],b[10],n;
	printf("Enter n value:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);
	}
	int *ptr;  // stores base address
	int (*ptr1)[10];  //stores whole address
	
	ptr = a;
	ptr1 = &a;
	
	printf("%u\t%u\n",ptr,ptr1);
	ptr++;
	ptr1++;
	
	printf("%u\t%u\n",ptr,ptr1);
	
}
