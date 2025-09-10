#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5], num, i, count = 0;
    printf("Enter 5 Elements In An Array \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter Element Wich You Want To Know Its Frequency \n");
    scanf("%d", &num);

    for (i = 0; i < 5; i++)
    {
        if (a[i] == num)
        {
            count += 1;
        }
    }
    if (count == 0)
    {
        printf("Sorry Not Found.");
    }
    else
    {
        printf("Found %d Times.", count);
    }
    return 0;
}