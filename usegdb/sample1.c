#include<stdio.h>

int add(int a,int b);

int main()
{
	int a = 0,b = 0;
	printf("please give a: ");
	scanf("%d", &a);
	printf("please give b: ");
	scanf("%d", &b);
	int c = add(a,b);
	printf("result a+b = %d\n", c);
}

int add(int a, int b)
{
	return a+b;
}
