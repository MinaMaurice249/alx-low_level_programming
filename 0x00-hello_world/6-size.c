#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char c;
int i;
long a;
long long z;
float f;
printf("Size of a char:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int:%lu byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
