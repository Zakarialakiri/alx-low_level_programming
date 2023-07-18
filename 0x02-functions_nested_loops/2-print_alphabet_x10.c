#include "main.h"
/**
* print_alphabet_x10 - Make alphabet x10 times 
* Return void
*/
void print_alphabet_x10(void)
{
char letter;
int counter;
for (counter = 0; counter < 10; counter++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
