/*
-- Name: James Novino
-- Login UserId: tue73681 @ temple.edu
-- TUid: 914968597
-- Assignment: 2
-- Version Number: 1
-- Date: Feburary 6, 2015
-- Due Date: Feburary 14, 2015
-- Class: C Programming, CIS 2107
-- Instructor: Ola Ajaj
-- Description: Takes player one input and allows player to guess the pass code.
-- File Name: revenue.c
-- Functions: error
*/

// PREPROCESSOR DIRECTIVES
// header files: Angle brackets are standard, quotes are programmer written

#include <stdlib.h>
#include <stdio.h>

void error( char* input_fail );


// symbolic constants usable throughout the source code

int main (void)         //main header
{                       //main body begins

// local variables for main
int  quantity;
double price = 0.0;
double discount, cost, discount_amt, total;

//Main Body
printf("\nWelcome to \"Temple\" store \n");
printf("\n\tEnter item price: ");
scanf("%lf", &price);
if(price < 0){
    error("valid item price");
}
printf("\tEnter quantity: ");
scanf("%d", &quantity);
if(quantity > 0){
    if(quantity < 50){
        discount = 0.0;
    } else if(quantity >= 50 && quantity < 100){
        discount = 0.1;
    } else if(quantity >= 100 && quantity < 150){
        discount = 0.15;
    } else if(quantity >= 150){
        discount = 0.25;
    } 
} else{
        error("valid quantity order");
}

cost = quantity * price;
discount_amt = discount * cost;
total = cost - discount_amt;

printf("\n\tThe item price is:  $%.1f \n", price );
printf("\tThe order is: %d item(s)\n" , quantity);
printf("\tThe cost is: $%.1f \n", cost);
printf("\tThe discount is: %.1f%\n", discount*100 );
printf("\tThe discount amount is: $%.1f\n" , discount_amt);
printf("\tThe total is: $%.1f\n" , total);
printf("\nThank you for using \"Temple\" store\n\n");
return (EXIT_SUCCESS);
}

/*
-- Function name: error
-- Description: prints out error command and exits program 
-- Input: input_fail
-- Output: None.
-- Globals: None.
-- Returns: None. 
*/

void error( char* input_fail ){
    printf("\n\tThis is not a %s.\n" , input_fail);
    printf("\tPlease run the program again!");
    printf("\n\nThank you for using \"Temple\" store\n\n");
    exit(0);    
}

