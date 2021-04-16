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
 * @brief The function saves the data in trhe file.txt file
 * 
 * @param new tajes struct as input containing all the data 
 * @return char* Returns an string if the record saved sucessfully
 */
char* addrecord(person new);
/**
 * @brief prints all records saved in file.txt file
 * 
 * @return int returns an integer value 1 after printing all the data 
 */
int listrecord();
/**
 * @brief search the respective contact details in the text file 
 * 
 * @param name takes the first_name as an input for seraching the contact
 * @return int returns 1 if contact founds and printed the details of the contact.
 */
int searchrecord(char name[]);
/**
 * @brief modifies the contact details
 * 
 * @param name takes the first_name of the contact that need to be modified.
 * @return char* returns a string implies the contact have been sucessfully modiefied.
 */
char* modify_record(char name[]);
/**
 * @brief removes all the records in the data base(file.txt) file
 * 
 * @return char* return a string implies all data removed
 */
char* remove_record();
/**
 * @brief exit the system with system code 0
 * 
 */
void  exitt();

#endif  