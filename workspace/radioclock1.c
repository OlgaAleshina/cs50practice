// ask the user the date

#include <stdio.h>

int main()
{ //declare 3 integers
    int month, day, year; 

//display a message
printf ("Enter the month, day and year\n"); 
//read input
scanf ("%d%d%d", &month, &day, &year);


// print the result
printf ("The date is %d/%d/%d.\n", month, day, year);

}