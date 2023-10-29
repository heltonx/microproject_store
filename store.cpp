/*

This is a minimalist project to do a little store purchase system with just his most basic atributes

*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int acumulator ( ) {
	
	int option = 1 ;
	float total ;
	float value ;
	
	do {
	
	printf ( "Type the value of the product" ) ; //accept float values
	scanf ( "%f" , &value ) ;
	total = total + value ;
	
	system ( "cls" ) ; 
	
	printf ( "\nAdd new products to purchase? 1 - Yeah ; 2 - Nope \n" ) ;
	scanf ( "%d" , &option ) ;
	
	} while (option == 1);
    
    
    printf ("Total of your purchase: ");
    printf ("%f",total);
    
    printf ("\nThank you, be welcome to return again");
}

int main (void){
	
	printf("Welcome to the Market \n");
	acumulator();
	

	
	return 0;
}


