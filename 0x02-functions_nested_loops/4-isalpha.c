#include "main.h"

/**
* _isalpha - checks for alphabetical letters
*  @C: a charcter to be checke on
*  Return: returns 0 or 1 depending in condition
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
