#include <stdio.h>
#include <CUnit/CUnit.h>
#include "util.h"
 
void test_doubleNum()
{
	CU_ASSERT(doubleNum(10) == 20);
	CU_ASSERT(doubleNum(0) == 0);
	CU_ASSERT(doubleNum(-1) == -2);
}
