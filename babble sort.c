/*
* babble sort
*
* created by Ahmed_Elkhodary
*/


#include<stdio.h>

int compare(int a,int b){
	if (a > b)
	return 1;
	else return -1;
}

void BUBBLE_SORT(int arr[] , int n, int (*compare)(int,int) ){
	int i , j, temp;
	for(i=0; i<5; i++){
		for(j=0; j<5-1; j++){
			if(compare(arr[j], arr[j+1]) > 0 )
			{
				temp = arr[j];
				*(arr+j)= *(arr+(j+1));
				*(arr+(j+1)) = temp;
			}
		}
	}
	
	
} 

int main(void){
   
   int i,n = 5 ;
   int arr[] = { 25, 3, 8, 5, 6}	;


   
   for(i=0 ; i <5 ; i++  ){
   	
   	printf("%d ",arr[i]);
   }	
   printf("\n\n");
   BUBBLE_SORT(arr,n, &compare);
   
   for(i=0 ; i <5 ; i++  ){
   	
   	printf("%d ",arr[i]);
   }
	
	scanf("%d");
	return 0;
}
