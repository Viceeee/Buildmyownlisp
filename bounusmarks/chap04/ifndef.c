 //#ifndef<token>
//code
//#else
//code to include if the token is defined
//#endif

//note: the #ifndef directive must be closed by an #endif directive

//example
#include<stdio.h>
#define AV_actress 3202412
#ifndef AV_actress 
#define AV_actress 3202413
#endif

int main()
{
	printf("my favourite av actress is %d\n",AV_actress);
	return 0;
}
