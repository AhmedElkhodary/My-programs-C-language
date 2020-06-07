/*
* pointer to structures
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>

struct point{
	
	int x, y;
};


int main(void){
	
	struct point p1 = {1, 2};
    
    // p2 is a pointer to structure p1
	struct point *p2 = &p1; 	
	
	// print member of structure 
	printf("P1.X= %d     P1.Y= %d\n",p1.x, p1.y);
	
	// Accessing structure members using structure pointer 
	p2 -> x = 3;
	p2 -> y = 4;

	// print member of structure 
	printf("P1.X= %d     P1.Y= %d",p2->x, p2->y);	
	
	
	
	
	scanf("%d");
	return 0;
}
