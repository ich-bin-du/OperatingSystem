#include <stdio.h>
#include "do.h"

int main(void)
{
	void (*fnc)(char*);
	fnc = printString;
	char* ptr = {"hello"}; 
	char* pattern = {"hel*o"};
	printString(ptr);
	printStringLength(ptr);
	testPattern(pattern, fnc);
	return 0;
}
