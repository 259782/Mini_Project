/**
 * @file Display_Student.c
 * @author JAHNAVI JHA
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>

#include "display_Student.h"

int display_Student(void) {
  Student_t Student;
  FILE *fptr;
  int count = 0;
  if ((fptr = fopen("Students.bin", "rb")) == NULL) {
    return -2;
  }

  printf("\n### Student_Records ###\n");
  while (fread(&Student, sizeof(Student), 1, fptr) == 1) {
    printf("Name = %s\nStandard = %s\nEmail ID = %s\nGPA = %f\nsports activity = %s\n\n ", Student.name,
             Student.standard, Student.email_id,Student.GPA,Student.sports);
    count++;
  }
  printf("### Student_Records ###\n\n");
  fclose(fptr);
  return count;
}