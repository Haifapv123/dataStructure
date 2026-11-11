
#include <stdio.h>

int main()
{
    int a[100], n, i, choice, pos, value;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    do
    {
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Display");
        printf("\n4. Searching");
        printf("\n5. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter position: ");
                scanf("%d", &pos);

                printf("Enter element: ");
                scanf("%d", &value);

                if(n >= 100 || pos < 1 || pos > n + 1)
                {
                    printf("Invalid position or array full");
                    break;
                }

                for(i = n; i >= pos; i--)
                {
                    a[i] = a[i - 1];
                }

                a[pos - 1] = value;
                n++;

                printf("Element inserted successfully");
                break;

            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &pos);

                if(pos < 1 || pos > n)
                {
                    printf("Invalid position");
                    break;
                }

                for(i = pos - 1; i < n - 1; i++)
                {
                    a[i] = a[i + 1];
                }

                n--;

                printf("Element deleted successfully");
                break;

            case 3:
                printf("Array elements are:\n");

                for(i = 0; i < n; i++)
                {
                    printf("%d ", a[i]);
                }
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &value);

                for(i = 0; i < n; i++)
                {
                    if(a[i] == value)
                    {
                        break;
                    }
                }

                if(i < n)
                    printf("Element found at position %d", i + 1);
                else
                    printf("Element not found");

                break;

            case 5:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice");
        }

    } while(choice != 5);

    return 0;
}

