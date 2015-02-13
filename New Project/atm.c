/*
-- Name: James Novino
-- Login UserId: tue73681 @ temple.edu
-- TUid: 914968597
-- Assignment: 2
-- Version Number: 1
-- Date: Feburary 13,2015
-- Due Date: Feburary 20, 2015
-- Class: C Programming, CIS 2107
-- Instructor: Ola Ajaj
-- Description: Simulation for standard bank transcations
-- File Name: atm.c
-- Functions: error
*/

// PREPROCESSOR DIRECTIVES
// header files: Angle brackets are standard, quotes are programmer written

#include <stdlib.h>
#include <stdio.h>

void error( char* input_fail );
void menu(int pin,int count);


// symbolic constants usable throughout the source code

int main (void)         //main header
{                       //main body begins

// local variables for main
double balance = 5000.0;
int pin = 3014;
int flag = 0;
double discount, cost, discount_amt, total;

//Main Body
printf("\nWelcome to \"Temple\" Atm \n");
while(flag != 1){
    menu(pin, 0);
}

printf("\nThank you for using \"Temple\" Atm\n\n");
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

/*
-- Function name: menu
-- Description: prints out error command and exits program 
-- Input: pin
-- Output: None.
-- Globals: None.
-- Returns: None. 
*/

void menu(int pin,int count){
    
    int pin_in;
    int option;
    printf("\tPin: ");
    scanf("%d",&pin_in);
    if(pin_in == pin){
        printf("\t1.Balance Checking\n\t2.Withdraw\n\t3.Deposit\n\t4.Quit");
        printf("\nOption: ");
        scanf("%d" , option);
    }else{
        printf("\tIncorrect Pin\n\n");
        count++;
        if(count < 3){
            menu(pin,count);
        } else{
            printf("\nYou have reached your maximum number of pin attempts.\n");
            exit(0);
        }
    }
}

