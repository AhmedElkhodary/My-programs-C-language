/*
* Array reverse 
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;

    printf("enter number: ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
     int j;
     int *ptr = (int*) malloc(num * sizeof(int));
     for(i=0,j= num-1;   i<num || j>=0 ; i++,j--){
          *(ptr + i) = *(arr + j);
     }
    for(i = 0; i < num; i++)
        *(arr + i) = *(ptr +i);


    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
        
    scanf("%d");    
    return 0;
}
