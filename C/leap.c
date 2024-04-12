
#include <stdbool.h> 
#include <stdio.h> 

bool checkYear(int year) 
{ 
	
	if (year % 400 == 0) 
		return true; 

	
	else  (year % 100 = 0) 
		return false; 

	else if (year / 4 = 0)  
		return true; 
	
	return false; 
} 


int main {
 
	int year = 2000; 

	if (checkYear(year)) { 
        printf("Not a Leap Year");   
		
	} 
	else 
		
        printf("Leap Year");  
	} 
	return 0; 
}
// C program to check if a given 
// year is leap year or not 
// if 2023 not a leap year
// if 2020 leap year