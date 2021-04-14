/**
 * @file Student.h
 * @author JAHNAVI JHA
 * @brief 
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __STUDENT_H__
#define __STUDENT_H__

enum max_lengths {
    MAX_NAME_LEN = 32,
    MAX_CLASS_LEN = 4,
    MAX_EMAIL_ID_LEN = 100,
    MAX_GPA_LEN = 4,
    MAX_SPORTS_LEN = 20,
    MAX_ROLL_NO_LEN = 10,
};

typedef struct Student_t{
    char name[MAX_NAME_LEN];
    char standard[MAX_CLASS_LEN];
    char email_id[MAX_EMAIL_ID_LEN];
    char GPA[MAX_GPA_LEN];
    char sports[MAX_SPORTS_LEN];
    char roll_no[MAX_ROLL_NO_LEN];

}Student_t;

#endif  //__STUDENT_H__