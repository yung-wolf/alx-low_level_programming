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

int _abs(int z);
/* returns absolute num */

int print_last_digit(int x);
/* prints and returns last digit*/

void jack_bauer(void);
/* prints the hours and minutes in a day */

void times_table(void);
/* 9 times table */

int add(int x, int y);
/* sum of two ints*/

void print_to_98(int n);
/* print from n to 98 */

void print_times_table(int n);
/* print times table of num between 0 - 15 */

int _isupper(int c);
/* returns 1 for uppecrcase and 0 for others*/

int _isdigit(int c);
/* returns 1 for num b/ <0-9> and 0 for others*/

int mul(int a, int b);
/* multiplies two ints*/

void print_numbers(void);
/* print nums from 0-9*/

void print_most_numbers(void);
/* print nums from 0-9 except 2 and 4*/

void more_numbers(void);
/* prints 10 rows of nums from 0-14)*/

void print_line(int n);
/* print line 'n' number of times*/

void print_diagonal(int n);
/* print diagonal lines 'n' number of times*/

void print_square(int size);
/* print squares 'n' number of times*/

void print_triangle(int size);
/* print triangle*/

void print_number(int n);
/* prints an int */

void reset_to_98(int* n);
/* updates an int using its pointer */

void swap(int* a, int* b);
/* swaps two ints using their pointers */

int _strlen(char* s);
/* returns len of string */

void _puts(char* str);
/* prints string to stdout*/

void print_rev(char* s);
/* reverses string */

void rev_string(char* s);
/* reverse string */

void puts2(char* str);
/* prints every other element */
#endif
