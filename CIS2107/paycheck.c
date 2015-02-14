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
-- File Name: paycheck.c
-- Functions: printKeyCode, getKeyCode, checkKeyCode, invalid_colors
*/


// PREPROCESSOR DIRECTIVES
// header files: Angle brackets are standard, quotes are programmer written

#include <stdlib.h>
#include <stdio.h>

#define WORKWEEK_HOURS 40.0

void error( char* input_fail );



// symbolic constants usable throughout the source code

int main (void)         //main header
{                       //main body begins

// local variables for main
int  tuid;
double salary = 0.0;
double regpay, netpay;
double hours = 0.0;
double ovrpay = 0.0;

//Main Body
printf("\nWelcome to \"TEMPLE HUMAN RESOURCES\" \n");
printf("\n\tEnter Employee Number: ");
scanf("%d", &tuid);
if(tuid < 0){
    error("a valid Employee Number");
}
printf("\tEnter Hourly Salary: ");
scanf("%lf", &salary);
if(salary < 0){
    error("valid hourly salary amount");
}
printf("\tEnter Weekly Time: ");
scanf("%lf", &hours);
if(hours > 0){
    if(hours <= 40.0){
        netpay = hours*salary;
    } else if(hours > 40){
        regpay = salary*WORKWEEK_HOURS;
        ovrpay = (hours-40.0)*(salary*1.5);
        netpay = regpay + ovrpay;
    }
    
}else{
    error("valid weekly time");
}
printf("\t==============================\n");
printf("\tEmployee #: %d \n", tuid );
printf("\tHourly Salary: $%.1f\n" , salary);
printf("\tWeekly Time: %.1f \n", hours);
printf("\tRegular Pay: $%.1f\n",regpay);
printf("\tOvertime Pay: $%.1f\n" , ovrpay);
printf("\tNet Pay: $%.1f\n" , netpay);
printf("\t==============================\n");
printf("\nThank you for using \"Temple Human Resources\"\n\n");
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
    printf("\n\nThank you for using \"Temple Human Resources\"\n\n");
    exit(0);    
}

