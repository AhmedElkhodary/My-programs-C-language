/*
* Array of Structures
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>

struct point{
	
	int x, y;

};


int main(void){
	
    // create array of structures
	struct point arr[10];
	
	// acccss array members
	arr[0].x = 0;
	arr[0].y = 0;
	arr[1].x = 1;
	arr[1].y = 1;	
	
	printf("STRUCT1.X = %d    STRUCT1.Y = %d\n",arr[0].x, arr[0].y);
	printf("STRUCT2.X = %d    STRUCT2.Y = %d\n",arr[1].x, arr[1].y);		
	
	scanf("%d");
	return 0;
}
