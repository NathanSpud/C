//Mar. 14, 2022
/*
 * struct1.c
 *
 *  Created on: Mar. 14, 2022
 *      Author: garyit
 */
 
#include<stdio.h>
#include<string.h>
 
struct Student{
    char name[30];
    int studentID;
    char sem1_classes[5][30];
    float scores[5][30];
};
 
int main()
{
    struct Student student1; // declaring a new student struct
 
    strcpy(student1.name, "Gary Rowe");
    printf("student's name: %s\n", student1.name);
 
    return 0;
}