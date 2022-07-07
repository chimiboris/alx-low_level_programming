#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main- Entry Point
*
* Return: Always 0 (success)
*
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is ",n);
if ((n > 5) > 5)
{
	printf("Greater than 5");
}
if (n == 0)
{
	printf("0");
}
if ((n < 6 && n != 0)
{
	printf("Less than 6 and not 0"); 
}	

printf("\n");
    
return (0);
}
