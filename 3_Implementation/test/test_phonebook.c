#include "unity.h"
#include <phonebook.h>

/* Modify these two lines according to the project */
#include <phonebook.h>
#define PROJECT_NAME    "Phonebook"

/* Prototypes for all the test functions */
void test_add(void);
void test_list(void);
void test_search(void);
void test_modify(void);
void test_remove(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_list);
  RUN_TEST(test_search);
  RUN_TEST(test_modify);
  RUN_TEST(test_remove);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  person contact ={"sai","chandavolu","pedapudi",21,"Male",8870996115,"India","saivit2021@gmail.com","saisai"};
  TEST_ASSERT_EQUAL_STRING("Record Added Sucessfully", addrecord(contact));
  
}

void test_list(void) {
  TEST_ASSERT_EQUAL(1, listrecord());
  

}

void test_search(void) {
  TEST_ASSERT_EQUAL(1,searchrecord("sai"));
  

}

void test_modify(void) {
  TEST_ASSERT_EQUAL_STRING("Modified Sucessfully", modify_record("sai"));
  
 
}
void test_remove(void) {
  TEST_ASSERT_EQUAL_STRING("Deleted successfully", remove_record());
  
 
}
