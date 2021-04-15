#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct person
{
    char first_name[50];
    char last_name[50];
    char address[300];
    int age;
    char gender[10];
    long long  number;
    char country[30];
    char mail[30];
    char nick_name[30];
}person;
/**
 * @brief 
 * 
 * @param new 
 * @return char* 
 */
char* addrecord(person new);
/**
 * @brief 
 * 
 * @return int 
 */
int listrecord();
/**
 * @brief 
 * 
 * @param name 
 * @return int 
 */
int searchrecord(char name[]);
/**
 * @brief 
 * 
 * @param name 
 * @return char* 
 */
char* modify_record(char name[]);
/**
 * @brief 
 * 
 * @return char* 
 */
char* remove_record();
/**
 * @brief 
 * 
 */
void  exitt();

#endif  