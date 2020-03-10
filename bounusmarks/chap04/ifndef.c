 //#ifndef<token>
//code
//#else
//code to include if the token is defined
//#endif

//note: the #ifndef directive must be closed by an #endif directive

//example
#include<stdio.h>
#define AV_actress chongtianxinli
#ifndef AV_actress 
#define AV_actress chongtianxinli_breast_big
#endif

int main()
{
	printf("my favourite av actress is %s \n",AV_actress);
	return 0;
}
