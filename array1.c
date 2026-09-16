#include <stdio.h>
int main()
{
int SIZE,element;
printf("Enter the size of the array:\n");
scanf("%d\n",&SIZE);
int numbers[SIZE];
for(int i=0;i<SIZE;i++)
{
printf("Enter the elements:\n");
scanf("%d",&element);
numbers[i]=element;
}
printf("Initialized array elements:\n");
for(int i=0;i<SIZE;i++){
 printf("Numbers[%d]=%d\n",i,numbers[i]);
}
return 0;
}

