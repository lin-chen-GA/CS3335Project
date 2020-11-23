#include <stdio.h>
#include <string.h>
#include <CUnit/CUnit.h>
#include "hello.h"
 
void test_hello()
{
	CU_ASSERT(strcmp(hello(), "Hello World\n") == 0);
}
