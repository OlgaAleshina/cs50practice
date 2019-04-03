// ask the user the date

#include <stdio.h>

int main()
{ //declare 3 integers
    int month, day, year; 

//display a message
printf ("Enter the month\n"); 
//read input
scanf ("%d", &month);

//display a message
printf ("Enter the day\n"); 
//read input
scanf ("%d", &day);

//display a message
printf ("Enter the year\n"); 
//read input
scanf ("%d", &year);

// print the result
printf ("The date is %d/%d/%d.\n", month, day, year);

}