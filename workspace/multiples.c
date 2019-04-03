#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int x, y, n;
    
    printf("Give a number between 1 and 100 \n");
    scanf ("%d", &x);

    for (y=1; y<=100; y++)
    {
      if (x%y==0);
       printf("%d", y);
    }

    printf("\n");
    }