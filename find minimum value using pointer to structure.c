#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5], *p, i, min = 0;
    p = &a[0];
    printf("Enter Element To Search Minimum Value \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
    min = *p;
    for (i = 1; i < 5; i++)
    {
        if (*(p + i) < min)
        {
            min = *(p + i);
        }
    }
    printf("Minimum Value = %d", min);
    return 0;
}