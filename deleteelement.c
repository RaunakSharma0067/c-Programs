#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10], i, j, key, pos = -1;
    printf("Enter 10 Elements In An Array \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Element Which You Want To Delete From An Array");
    scanf("%d", &key);
    for (i = 0; i < 10; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }
    if (pos == -1)
    {
        printf("Sorry Element Not Found");
    }
    else
    {
        for (j = pos; j < 9; j++)
        {
            a[j] = a[j + 1];
        }
        for (i = 0; i < 9; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}