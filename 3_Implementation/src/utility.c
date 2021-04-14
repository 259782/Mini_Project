/**
 * @file utility.c 
 * @author  JAHNAVI JHA 
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "utility.h"
#include "Student.h"

void get_data(char *name) {

  int i = 0, j;
  char c, ch;
  __fpurge(stdin);
  do {
    c = getchar();
    if (c != '\n') {
      *(name + i) = c;
      putchar(c);
      i++;
    }
    if (c == 8) {
      if (i > 0) {
        i--;
      }
      for (j = 0; j < i; j++) {
        ch = *(name + j);
        putchar(ch);
      }
    }
  } while (c != '\n');
  *(name + i) = '\0';
}

void get_Student_details(Student_t *Student) {
  printf("\nEnter name: ");
  __fpurge(stdin);
  get_data(Student->name);

  printf("\nEnter the Standard: ");
  __fpurge(stdin);
  get_data(Student->standard);

  printf("\nEnter Email ID: ");
  __fpurge(stdin);
  get_data(Student->email_id);

  printf("\nEnter roll no.: ");
  __fpurge(stdin);
  get_data(Student->roll_no);

  
  printf("\nEnter GPA.: ");
  __fpurge(stdin);
  get_data(Student->GPA);

  
  printf("\nEnter Sports: ");
  __fpurge(stdin);
  get_data(Student->sports);
}