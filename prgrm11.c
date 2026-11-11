
#include <stdio.h>

int main()
{
    int a[10], b[10], i, j, n, m;

    printf("Enter size of set A: ");
    scanf("%d", &n);

    printf("Enter elements of A:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter size of set B: ");
    scanf("%d", &m);

    printf("Enter elements of B:\n");
    for(i = 0; i < m; i++)
        scanf("%d", &b[i]);

    printf("Union: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            if(b[i] == a[j])
                break;

        if(j == n)
            printf("%d ", b[i]);
    }

    printf("\nIntersection: ");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}

