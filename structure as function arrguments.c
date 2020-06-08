/*
* structure as function arrguments
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>
#include <string.h>
struct books{
	
	int id ;
	char author [20];
	char tittle [30];	

};

void print_book(struct books book);	

int main(void){
	
	struct books b1;
	

	
	b1.id = 1;
	strcpy(b1.author, "AHMED");
	strcpy(b1.tittle, "planets");	
	
	print_book(b1);


	scanf("%d");
}

void print_book(struct books book){
	
	
	printf("ID: %d\nAUTHOR: %s\nTITTLE: %s", book.id, book.author, book.tittle );
}


