#include "unity.h"
#include "Student_Record.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_Add_Student(void) {
  Student_t new_Student = {"Jahnavi Jha", "43", "jahnavi@gmail.com","9.1","badminton","043"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
}

void test_Delete_Student(void) {
  Student_t new_Student = {"Leena Singh", "14", "leena@gmail.com","9.3","khokho","014"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0, Delete_Student(new_Student.name));
}

void test_Modify_Student(void) {
  Student_t new_Student = {"Harshit Sharma", "20", "harshit@gmail.com","8.5","tennis","020"};
  Student_t new_Student1 = {"Harshit Sharma", "21", "harshitj@gmail.com","8.3","cricket","021"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0, Modify_Student(new_Student.name, &new_Student1));
  TEST_ASSERT_EQUAL(0, Delete_Student(new_Student1.name));
}
void test_Search_Student(void) {
  Student_t new_Student = {"Prachi Singh", "32", "prachic@gmail.com","8.1","tabletennis","032"};
  TEST_ASSERT_EQUAL(0, Add_Student(&new_Student));
  TEST_ASSERT_EQUAL(0 , Search_Student(new_Student.name));
  TEST_ASSERT_EQUAL(0 , Delete_Student(new_Student.name));
}
void test_Display_Student(void) 
{ 
  TEST_ASSERT_EQUAL(1, Display_Student()>0);
}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_Add_Student);
  RUN_TEST(test_Delete_Student);
  RUN_TEST(test_Modify_Student);
  RUN_TEST(test_Search_Student);
  RUN_TEST(test_Display_Student);

  /* Close the Unity Test Framework */
  return UNITY_END();
}