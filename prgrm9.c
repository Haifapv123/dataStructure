
#include <stdio.h>

int main()
{
    int key, index;
    int size = 10;

    printf("Enter a key: ");
    scanf("%d", &key);

    index = key % size;

    printf("Hash value = %d\n", index);

    return 0;
}

