#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
* main - run my code
* Description: This program will assign a random number to the variable n
* Return: 0 or otherwise 1
*/
int main(void)
{
        int n;
        int last;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /* your code goes there */
        last = n % 10;
       if (last == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last);
	}
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	if (last < 6 && last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last));
	}
        return (0);
}