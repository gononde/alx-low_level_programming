#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - assign a random number to the variable n
*
* Description : using main function
* this function test and return a value
* Return: 0 after printf
*/
int main(void)
{
		int n;
		int L;
		char string[] = "Last digit of";

			srand(time(0));
				n = rand() - RAND_MAX / 2;
				L = n % 10;
		if (L > 5)
			printf("%s %d is %d and is greater than 5\n", str, n, L);
		else if (L == 0)
			printf("%s %d is %d and is 0\n", str, n, L);
		else if (L < 6)
			printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
					/* your code goes there */
					return (0);

}
