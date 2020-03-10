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
			case 5:  puts("5");continue;
			case 4:  puts("4");
			case 3:  puts("3");
			case 2:  puts("2\n");break;
			case 1:  puts("1");
			default: puts("wrong");
	//continue是终止本次循环的执行，跳过这次循环中continue语句后尚未执行的语句，接着下一次循环条件的判断,那么在这个例子中，continue和break的作用基本相同，假如想要达到我想的那个效果的话，应该是这样的
	
/*	for(int n = 10; n <= 10&&n > 0; n--)
	{
		switch(n)
		{
			case 10: puts("10");break;
			case 9:  puts("9");break;
			case 8:  puts("8");break;
			case 7:  puts("7");break;
			case 6:  puts("6\n");break;
			case 5:  puts("5");
			case 4:  puts("4");
			case 3:  puts("3");
			case 2:  puts("2\n");break;
			case 1:  puts("1");
			default: puts("wrong");break;
		
		}
	}
	*/
	return 0;
}
