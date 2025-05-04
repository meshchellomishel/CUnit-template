#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

#include "utils.h"

TEST_FUNCT(foo) {
     /* Фейковый код */
    CU_ASSERT_EQUAL(0, 1);
}
TEST_FUNCT(foo2) {
    /* Фейковый код */
    CU_ASSERT_EQUAL(1, 1);
}

void runSuite(void) {
    CU_pSuite suite = CUnitCreateSuite("Suite1");
    if (suite) {
        ADD_SUITE_TEST(suite, foo)
        ADD_SUITE_TEST(suite, foo2)
    }
}