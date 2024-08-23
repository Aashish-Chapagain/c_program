#include <stdio.h>
#include <stdbool.h>
int odd_even(int n){
    if(n%2 == 0) {

    return 1 ;
    }
    else 
    return 0  ; 
}int main(){
    int arr[3][3],i,j,multiply_even  = 1 , sum_odd = 0 ;
    printf("Enter the elements of the array: \n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            if(odd_even(arr[i][j]) == 1){

            multiply_even *= arr[i][j] ; 
            }
            else{

             sum_odd += arr[i][j];
            }
        }
        

    }printf("The multiplication of even number in array is : %d\n", multiply_even);
    printf("The sum of odd number in array is : %d\n", odd_even) ;

    return 0 ; 
}
