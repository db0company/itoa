/*
** Made by	db0
** Contact	db0company@gmail.com
** Website	http://db0.fr/
*/

#include	<stdbool.h>
#include	<stdio.h>
#include	"include/itoa.h"

bool		print_converted_number(int number, unsigned int radix)
{
  char *	string_number;

  if (!(string_number = itoadup(number, radix)))
    {
      fprintf(stderr, "An error occurred (alloc or radix)\n");
      return (false);
    }
  printf("Your number %d in base %d is %s\n", number, radix, string_number);
  free(string_number);
  return (true);
}

int		main(int argc, char ** argv)
{
  if (argc < 2)
    {
      fprintf(stderr, "usage: %s number radix\n", argv[0]);
      return (EXIT_FAILURE);
    }
  return (print_converted_number(atoi(argv[1]), atoi(argv[2])) ?
	  EXIT_SUCCESS : EXIT_FAILURE);
}
