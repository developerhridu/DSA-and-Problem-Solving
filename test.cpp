// C program to illustrate constant variable definition
#include <stdio.h>

int main()
{

	// defining integer constant using const keyword
	const int int_const = 25;

	// defining character constant using const keyword
	const char char_const = 'A';

	// defining float constant using const keyword
	const float float_const = 15.66;

	printf("Printing value of Integer Constant: %d\n",
		int_const);
	printf("Printing value of Character Constant: %c\n",
		char_const);
	printf("Printing value of Float Constant: %f",
		float_const);

	return 0;
}
