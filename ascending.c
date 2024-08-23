#include<stdio.h>
int main()
{
    int n; // to take input from the user for array size  
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n],i,j; // to store the array elements
    for( i = 0; i < n; i++ )
    {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++ ){
        for ( j = i+1 ; j < n ; j++ ){
            if (arr[i]<arr[j]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
            
        printf("%d ", arr[i]);
    }    
    printf("\n");

    return 0;
}
