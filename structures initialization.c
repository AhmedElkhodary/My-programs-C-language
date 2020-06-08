/*
*  structures initialization 
*
* created by Ahmed_Elkhodary
*/

#include <stdio.h>


int main(void){
	
	//declaration structure
	struct student{
		
		int id;
		char name;
		int grade;
		
	};
	
	
	//frist method
	struct student st1{ 1, 'A', 60};
	
	//second method
	struct student st2;
	st2.id = 2;
	st2.name = 'B';
	st2.grade = 61;

	//third method
	struct student st3{ .id=3, .name='C', .grade=63};	
	
	
	printf("ID= %d   NAME= %c   GRADE= %d\n",st1.id, st1.name, st1.grade);
	printf("ID= %d   NAME= %c   GRADE= %d\n",st2.id, st2.name, st2.grade);
	printf("ID= %d   NAME= %c   GRADE= %d"  ,st3.id, st3.name, st3.grade);
	
	
	scanf("%d");
	return 0;
}
