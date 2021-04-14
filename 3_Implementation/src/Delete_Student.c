/**
 * @file Delete_Student.c
 * @author JAHNAVI JHA
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Delete_Student.h"
#include "utility.h"

int Delete_Student(const char *name) {
  Student_t Student;
  FILE *f, *ft;
  int flag, result;

  f = fopen("Students.bin", "rb");
  if (f == NULL) {
    return -2;
  } else {
    ft = fopen("temp.bin", "wb+");
    if (ft == NULL) {
      result = -3;
    } else {

      while (fread(&Student, sizeof(Student_t), 1, f) == 1) {
        if (strcmp(Student.name, name) != 0)
          fwrite(&Student, sizeof(Student_t), 1, ft);
        if (strcmp(Student.name, name) == 0)
          flag = 1;
      }
      fclose(f);
      f = NULL;
      fclose(ft);

      if (flag != 1) {
        remove("temp.bin");
        result = -1;
      } else {
        remove("Students.bin");
        rename("temp.bin", "Students.bin");
        result = 0;
      }
    }
  }
  if (NULL != f)
    fclose(f);

  return result;
}