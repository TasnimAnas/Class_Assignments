#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct student
{
    char name[30];
    int ID;
    char contact[20];
} Student;

int main()
{
    int n = 2;
    Student *st = (Student *)malloc(n * sizeof(Student));
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("\tEnter name: ");
        gets(st[i].name);
        fflush(stdin);
        printf("\tEnter ID: ");
        scanf("%d", &st[i].ID);
        fflush(stdin);
        printf("\tEnter contact: ");
        gets(st[i].contact);
        fflush(stdin);
    }
    printf("\n\n--------------- Displaying Data ----------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Student %d\n", i + 1);
        printf("\tName: %s\n", st[i].name);
        printf("\tID: %d\n", st[i].ID);
        printf("\tContact: %s\n", st[i].contact);
    }
}