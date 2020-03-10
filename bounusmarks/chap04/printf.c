// the function printf()family produce output according to a format as described below.
// the functions printf() and vprintf() write output to stdout, the standard output stream; 
// fprintf() and vfprintf() write output to the given output stream; sprintf(),snprintf(),vsprintf()and vsnprintf() write to the character string str.
#include<stdio.h>
int main(int argc, char** argv)
{
//	printf("%*d", width, num);
	printf ("Characters: %c %c \n", 'a', 65);
    printf ("Decimals: %d %ld\n", 1977, 650000L);
	printf ("Preceding with blanks: %10d \n", 1977);
	printf ("Preceding with zeros: %010d \n", 1977);
	printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
	printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
	printf ("Width trick: %*d \n", 5, 10);
	printf ("%s \n", "A string");
	return 0;


}
