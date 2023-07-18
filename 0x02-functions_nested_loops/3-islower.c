#include "main.h"
/**
* _islower - check for lower character
*@c: The character to be checked
* @return 1 if the character is lowercase, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
