#include "main.h"
/**
 * Make te alphabet
 *Prints the alphabet in lowercase followed by a new line.
 * Return : void
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
