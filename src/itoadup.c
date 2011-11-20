/*
** Made by	db0
** Contact	db0company@gmail.com
** Website	http://db0.fr/
*/

#include	<stdlib.h>

#include	"itoa.h"

char *		itoadup(int input, unsigned int radix)
{
  char *	buffer;

  if (radix <= 1
      || radix >= (int)sizeof(RADIX)
      || !(buffer = malloc(sizeof(*buffer)
			   * ((nbrlen(input, radix) - 1) + 2))))
    return (NULL);
  itoa(input, buffer, radix);
  return (buffer);
}
