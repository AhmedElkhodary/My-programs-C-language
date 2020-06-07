/*
* pointer to structure as function arrguments
*
* created by Ahmed_Elkhodary
*/


#include <stdio.h>
#include <string.h>

void printBook(struct books *book);

struct books{
	
	int id;
	char author [20];
	char subject[30];
};



int main(void){

    void *bookPtr;
    struct books book1,book2;
    
    book1.id = 1;
	strcpy( book1.author , "MOHAMED");
	strcpy( book1.subject , "SEAS");
	

    book2.id = 2;
	strcpy( book2.author , "ALI");
	strcpy( book2.subject , "CUNTRIES");	
		

    bookPtr  = &book1;	
	printBook(	(struct books*) bookPtr);
	
    bookPtr  = &book2;		
 	printBook(	(struct books*) bookPtr);	
	
	
	scanf("%d");
	return 0;
}


void printBook(struct books *book){
	printf( "ID: %d\n" , book->id );
	printf( "AUTHOR: %s\n" , book->author);
	printf( "SUBJECT: %s\n\n", book->subject);
	
}
