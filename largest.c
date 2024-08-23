#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n], large;
    printf("enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    large = arr[0];
    for (int j = 1; j <= n; j++)
    {
        if (arr[j] > large)
            large = arr[j];
    }
    printf("\n the largest elements of the array is :%d", large);
    return 0;
}
