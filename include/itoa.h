/*
** Made by	db0
** Contact	db0company@gmail.com
** Website	http://db0.fr/
*/

#ifndef		ITOA_H_
# define	ITOA_H_

#  include	<stdlib.h>

#  define	abs(val)	((val >= 0) ? val : -val)
#  define	RADIX		"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"

size_t		nbrlen(int input, unsigned int radix);

void		itoa(int input, char * buffer, unsigned int radix);
char *		itoadup(int input, unsigned int radix);

#endif		/* !ITOA_H_ */
