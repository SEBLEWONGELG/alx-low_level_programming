#include "main.h"

/**
<<<<<<< HEAD
 * _isupper - check for upper case letter
 * @c : character to check the case
 * Return:0 or 1
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90);

=======
 * _isupper - Checks for uppercase characters.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
>>>>>>> d53b048e33333d81fc63d40df907d7d630759bfd
}
