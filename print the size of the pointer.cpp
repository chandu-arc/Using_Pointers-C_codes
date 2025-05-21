// Program to print the size of the pointer 

#include<stdio.h>
int main()
{
	int *p;
	float *p1;
	char *p2;
	double *p3;
	void *p4;
	
//	printf("%u %u %u %u %u %u %u %u %u %u\n",sizeof(p),sizeof(p1),sizeof(p2),sizeof(p3),sizeof(p4),sizeof(*p),sizeof(*p1),sizeof(*p2),sizeof(*p3),sizeof(*p4));
	
	printf("%u %u %u %u %u %u %u %u\n",sizeof(p),sizeof(p1),sizeof(p2),sizeof(p3),sizeof(*p),sizeof(*p1),sizeof(*p2),sizeof(*p3));
	printf("%d\n",sizeof((int*)p4));
	printf("%d\n",sizeof(*(int*)p4));
}
