#ifndef _MAIN_H
#define _MAIN_H

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);
/* Print character*/

void print_alphabet(void);
/* print alphabets in lowercase */

void print_alphabet_x10(void);
/* prints 10 rows of alphabets in lowercase */

int _islower(int c);
/* returns 1 for lowercase and 0 for other */

int _isalpha(int c);
/* returns 1 for letters and 0 for others */

int print_sign(int n);
/* returns 1,0,-1 for positive, zero, negative numbers */
#endif
