/*
** Made by	db0
** Contact	db0company@gmail.com
** Website	http://db0.fr/
*/

#include	<stdlib.h>

size_t		nbrlen(int input, unsigned int radix)
{
  size_t	i;

  i = 1;
  if (input < 0)
    ++i;
  while (radix > 1 && (input /= radix))
    ++i;
  return (i);
}
