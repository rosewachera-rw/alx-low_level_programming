#include <stdio.h>

/**
 *main - assign a random number and to the variable n each time it is executed
 *and print last digit of the number stored in the variable n
 *Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar(10);

return (0);
}
