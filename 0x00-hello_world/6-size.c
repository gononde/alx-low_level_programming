#include <stdio.h>
/**
* main - print size of various type
*
* Description : using main
* this function "prints the size of various types on the computer"
* Return: Always 0 (Success)
*/
int main(void)
{
char b;
int a;
long int c;
long long int d;
float f;
printf("\"Size of a char :%lu byte(s)\n", sizeof(b));
printf("\"Size of an int :%lu byte(s)\n", sizeof(a));
printf("\"Size of a long int :%lu byte(s)\n", sizeof(c));
printf("\"Size of a long long int :%lu byte(s)\n", sizeof(d));
printf("\"Size of a float :%lu byte(s)\n", sizeof(f));
return(0);
}
