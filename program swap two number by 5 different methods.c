/*
*  program swap two number by 5 different methods
*  
*  created by Ahmed_Elkhodary
*/


#include <stdio.h>

void method1(int *a, int *b){
	printf("\n--use Temporary METHOD--\n");	
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

void method2(int *a, int *b){
	printf("\n--use + and - METHOD--\n");	
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void method3(int *a, int *b){
	printf("\n--use * and / METHOD--\n");	
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

void method4(int *a, int *b){
	printf("\n--BITWISE METHOD--\n");
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void method5(int *a, int *b){
	printf("\n--single statment METHOD--\n");
    *b = *a + *b - (*a = *b);
}

int main (void){	
	int no, num1, num2;
	printf( "----This program is swap value by 5 different methods----\n\n");	

	while(1){
		
		printf( "1- to use Temporary varible\n"
				"2- to use (+) and (-) \n"
				"3- to use (*) and (/) \n"
				"4- to use BITWISE XOR (^)\n"
				"5- to use Single statment\n"
				"0- to EXIT\n\n"
				"Enter NO of method: ");
	    scanf("%d",&no);
	  
	    if( no == 0 ) 	break; 
		if(no > 5 || no < 0 )   continue;	    	 
		
		if (no == 3){
        	printf("Plese don't enter 0 to any number :):)\n");			
		}  
		printf("Enter 1th num: ");
		scanf( "%d", &num1);
		printf("Enter 2th num: ");
		scanf( "%d", &num2);		
		
        switch(no){
        	case 1:
        		method1( &num1, &num2);
        		break;
        	case 2:
        	    method2( &num1, &num2);
        		break;        		
        	case 3:
        	    method3( &num1, &num2);        		
        		break;	
        	case 4:
        	    method4( &num1, &num2);        		
        		break;	
        	case 5:
        	    method5( &num1, &num2);        		
        		break;	
	        default:
	         	break;	        	
		}
				
		printf("1th = %d   2th= %d\n\n", num1, num2);		
	}
}
