#include<stdio.h>
int main(void)
{
	int a,b;

	printf("\nenter the values of a and b:");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping a=%d\tb=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nbefore swapping a=%d\tb=%d",a,b);
	return 0;
}