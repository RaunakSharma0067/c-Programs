#include <stdio.h>
#include <stdlib.h>
struct student
{
    int roll, batch;
    char name[20];
};
int main()
{
    struct student s, *ps;
    ps = &s;
    printf("Please Enter Roll-No Batch And Name \n");
    scanf("%d %d %s", &ps->roll, &ps->batch, ps->name);

    printf("Students details \n");
    printf(" Roll-No= %d \n Batch= %d \n Name=  %s", ps->roll, ps->batch, ps->name);
    return 0;
}