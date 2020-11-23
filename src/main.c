/// @file main.c
#include <stdio.h>
#include "hello.h"
#include "util.h"
 
/**
 * Main entry point of the program.
 */
int main()
{
		printf("%s\n", hello());
		printf("%d\n", doubleNum(10));
			 
		return 0;
}
