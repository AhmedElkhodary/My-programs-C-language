/* program that convert stringto uppercase
* 
* created by Ahmed_Elkhodary
*/

#include<stdio.h>
#include<ctype.h>


void convertToUppeerCase( char *sptr );

int main(void){
	
	char string [] = { "welcoMe" };
	printf( "before: %s\n", string);	

	convertToUppeerCase( string );

	printf( "after: %s\n", string);	


	scanf( "%d" );
	return 0;
}

void convertToUppeerCase( char *sptr){
	
	while(*sptr != '\0'){
		*sptr = toupper( *sptr );
		 sptr++;
	}

}
