#include<stdio.h>
int main(int argc, char ** argv)
{
	int n = 10;
	do
	{
		puts("helloworld!");
		n -= 1;
	}
	while(n <= 10 && n > 0 );

	return 0;
}
