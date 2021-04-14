/**
 * @file Search_Student.c
 * @author JAHNAVI JHA
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "utility.h"

int Search_Student(const char *roll_no) {
  Student_t Student;
  FILE *f;

  f = fopen("Students.bin", "rb");
  if (f == NULL) {
    return -2;
  }

  while (fread(&Student, sizeof(Student_t), 1, f) == 1) {
    if (strcmp(Student.roll_no, roll_no) == 0) {
      printf("\n details for %s:\n", roll_no);
      printf("Name = %s\nStandard = %s\nEmail ID = %s\nGPA = %s\nsports activity = %s\n\n ", Student.name,
             Student.standard, Student.email_id,Student.GPA,Student.sports);
      fclose(f);
      return 0;
    }
  }
  fclose(f);
  return -1;
}