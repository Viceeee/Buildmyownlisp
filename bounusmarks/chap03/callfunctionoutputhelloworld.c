#include<stdio.h>
int helloworld(int n)
{
	while(n > 0)
	{
		puts("helloworld!");
		n -= 1;
	}
}

int main(int argc,char** argv)
{
	int n = 0;
	puts("please enter a number ");
	scanf("%d",&n);
	if (n <0)
	  printf("number must above 0\n");
	else 
	  helloworld(n);
	return 0;
}
