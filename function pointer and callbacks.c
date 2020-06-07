/*
* function pointer and callbacks
* 
*  created by Ahmed_Elkhodary
*/

#include<stdio.h>

void A(void){
	
	printf("hello");
}

void B(void (*ptr) ()){
	
	ptr();
}

int main(){
	void (*p) () = A;
	
	B(p);


	
	scanf("%d");
	return 0;
}
