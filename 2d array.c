#include <stdio.h>
#include <stdbool.h>
int odd_even(int n){
    if(n%2 == 0) {

    return true ;
    }
    else 
    return false  ; 
}int main(){
    int arr[3][3],i,j,count  = 0 , count2 = 0 ;
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
            if(odd_even(arr[i][j]) ){

            count += 1 ; 
            }
            else{

             count2 += 1 ;
            }
        }
        

    }printf("the totoal number of even is : %d\n", count);
    printf("the total number of odd is : %d\n", count2) ;

    return 0 ; 
}
