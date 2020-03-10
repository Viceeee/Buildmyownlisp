#include<stdio.h>
#include<stdlib.h>
//give us access to the free function used later on in the code
#include<editline/readline.h>
#include<editline/history.h>
//give us access to the editline function ,readline and add_history

int main(int argc, char** argv)
{
	//print version and exit information
	puts("lispy version 0.0.0.0.1");
	puts("press ctrl+c to exit \n");

	//in a never ending loop
	while(1)
	{

		//output our prompt and get input
		char* input = readline("lispy> ");
		
		//add input to history
		add_history(input);


		//echo input back to user
		printf("no you are a  %s\n",input);

		//free retrieved input
		free(input);

	}
return 0;

}
