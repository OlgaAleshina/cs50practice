#include <stdio.h>

int main()
{
    int x, y, value, sum=0;
    printf ("Enter 3 numbers \n");
    
    for (y=1; y<=3; y++)
    {
            scanf ("%d", &value);
            sum = sum + value;
    }
    printf("The sum of 3 numbers is %d\n",sum);
return 0;
}