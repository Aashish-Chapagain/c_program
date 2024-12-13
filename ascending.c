#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n; // to take input from the user for array size  
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    if (n<1){
        printf("enter the valid number!");
        return 1 ; 
    }
    int *pSizeofarray = (int*)malloc(n * sizeof(int));
    if (pSizeofarray == NULL){
        printf("memory allocation failed "); 
        return 1 ; 
    }
    int arr[n],i,j; // to store the array elements
    for( i = 0; i < n; i++ )
    {
        printf("Enter number %d: ", i+1);
        scanf("%d",&arr[i]);
        getchar();
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

    free(pSizeofarray);

    return 0;
}
