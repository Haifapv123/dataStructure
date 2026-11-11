
#include <stdio.h>

int parent[100];

int find(int x)
{
    if(parent[x] == x)
        return x;

    return find(parent[x]);
}

void unionSet(int a, int b)
{
    int x = find(a);
    int y = find(b);

    if(x != y)
        parent[y] = x;
}

int main()
{
    int n, i, a, b;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
        parent[i] = i;

    printf("Enter two elements to union: ");
    scanf("%d%d", &a, &b);

    unionSet(a, b);

    printf("Enter element to find: ");
    scanf("%d", &a);

    printf("Representative = %d\n", find(a));

    return 0;
}

