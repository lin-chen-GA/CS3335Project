#include <stdio.h>
#include <string.h>
#include <CUnit/CUnit.h>
#include "CUnit/Basic.h"
#include "CUnit/Automated.h"
#include "hello.h"
#include "util.h"
#include "test_1.h"
#include "test_2.h"
 
int suitInit() {return 0;}
int suitClean() {return 0;}
 
int main()
{
	// initialize registry
	if (CUE_SUCCESS != CU_initialize_registry())
		return CU_get_error();
 
	// add a suit to the registry
	CU_pSuite pSuite = NULL;
	pSuite = CU_add_suite("Suite_1", suitInit, suitClean);
	if (NULL == pSuite) {
	  	CU_cleanup_registry();
	  	return CU_get_error();
     	}
 
	// add tests to the suit
	if ((NULL == CU_add_test(pSuite, "test of hello()", test_hello)) || 
			(NULL == CU_add_test(pSuite, "test of hello()", test_doubleNum)))
   	{
      		CU_cleanup_registry();
      		return CU_get_error();
   	}
 
	// run all tests using the CUnit Basic interface, output report to stdout
   	CU_basic_set_mode(CU_BRM_VERBOSE);
   	CU_basic_run_tests();
 
	// run all tests using the automated interface, output report to xml files
   	CU_automated_run_tests();
   	CU_list_tests_to_file();
 
	// clean registry
   	CU_cleanup_registry();
   	return CU_get_error();
}
