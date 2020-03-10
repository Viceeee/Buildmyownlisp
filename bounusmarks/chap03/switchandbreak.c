#include<stdio.h>

int main(int argc, char** argv)
{
	for(int n = 10; n <= 10&&n > 0; n--)
	{
		switch(n)
		{
			case 10: puts("10");break;
			case 9:  puts("9");break;
			case 8:  puts("8");break;
			case 7:  puts("7");break;
			case 6:  puts("6");break;
			case 5:  puts("5");break;
			case 4:  puts("4");break;
			case 3:  puts("3");break;
			case 2:  puts("2");break;
			case 1:  puts("1");break;
			default: puts("wrong");
		}
		
	}
	return 0;

}
