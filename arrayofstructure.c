#include <stdio.h>
#include <stdlib.h>
struct student
{
    int rollno;
    char name[20], course[10];
};

int main()
{
    struct student s[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Roll no , Name and Course Of Student %d \n", i + 1);
        scanf("%d %s %s", &s[i].rollno, s[i].name, s[i].course);
    }

    printf("----Info Of Student Is Given Below---- \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Student= %d Rollno = %d Name = %s Course = %s \n", i + 1, s[i].rollno, s[i].name, s[i].course);
    }
    return 0;
}