//Print Addresses & values of elements in an Array using pointers


#include<stdio.h>
main()
{
	int a[50],n;
	printf("Enter n value:");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
		printf("Enter array elements:");
		scanf("%d",&a[i]);
	}
	int *ptr = a;
	int i=0;
	while(i<n)		//for(int i=0;i<n;i++)
	{
	    printf("%u\t%u\n",(ptr+i),*(ptr+i));
	    i++;
	}
}
