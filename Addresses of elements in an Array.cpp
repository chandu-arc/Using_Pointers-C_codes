//Print Addresses & values of elements in an Array


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
	printf("%u\n",a);
	for(int i=0;i<n;i++)
	    printf("%u\t%u\n",&a[i],a[i]);
}
