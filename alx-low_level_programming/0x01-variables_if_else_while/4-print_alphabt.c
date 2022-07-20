#include <stdio.h>

/**
 *main - Entry point
 *and print last digit of the number stored in the variable n
 *Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
