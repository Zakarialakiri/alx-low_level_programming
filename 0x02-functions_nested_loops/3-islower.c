#include "main.h"
/**
* _islower - check for lower character
*@c: The character to be checked
* Return : 1 for _islower character or 0 for anything else
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
