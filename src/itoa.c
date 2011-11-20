/*
** Made by	db0
** Contact	db0company@gmail.com
** Website	http://db0.fr/
*/

#include	<stdlib.h>

#include	"itoa.h"

void		itoa(int input, char * buffer, unsigned int radix)
{
  size_t	i;

  i = nbrlen(input, radix) - 1;
  buffer[i] = '\0';
  if (input < 0)
    buffer[0] = '-';
  while ((input))
    {
      buffer[i] = RADIX[abs(input) % radix];
      input /= radix;
      --i;
    }
}
