#include<stdio.h>
int main()
{
    int arr[7];
    int sum = 0;
    printf("Enter 7 numbers:\n");
    for(int i=0; i<7; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum of the numbers is: %d\n", sum);
    return 0;
}