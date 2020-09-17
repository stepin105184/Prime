
#include "unity.h"
#include "prime.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void prime_test(void)
{
  TEST_ASSERT_EQUAL(0, prime(1));

}
void prime_test2(void)
{
  TEST_ASSERT_EQUAL(1, prime(11));

}

int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(prime_test);
   RUN_TEST(prime_test2);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
