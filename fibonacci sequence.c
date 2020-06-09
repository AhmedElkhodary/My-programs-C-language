/*
* fibonacci sequence
*
* created by Ahmed_Elkhodary
*/

# include <stdio.h>
# define SIZE  6                         // declaration constant size = 6


int main()
{ 

    int i ,j, fibo = 0;
	int arr[SIZE] = {0,1};               // definition of array of Size 6 and put first teo elemnts {1,2}

	for(i = 2 ; i<SIZE+2; i++){          // for loop to calculate  Fibonacci sequence
		                                 //       
        for(j = i-2 ; j < i ; j++)       //
		   fibo += arr[j];               //
	                                     //
		arr[i] = fibo;                   //
		fibo = 0 ;                       //
          
	}

	for(i = 0; i <SIZE; i++){              // for loop to print the array elements
		printf("%d,",arr[i]);
	}  
	



	 
    scanf("%d");
    return 0 ;
}



