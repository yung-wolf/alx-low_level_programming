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

void puts_half(char* str);
/* prints last half of string*/

void print_array(int* a, int n);
/* print 'n' elements of an array */

char *_strcpy(char* dest, char* src);
/* copies string to different buffer*/

char *_strcat(char* dest, char* src);
/* appends src-string to dest-string*/

char *_strncat(char* dest, char* src, int n);
/* appends n-elements of two strings */

char *_strncpy(char* dest, char* src, int n);
/* copies n-element of string*/

int _strcmp(char* s1, char* s2);
/* compares two string. Return negative, 0, positve num if s1 is less,equal, more than s2*/

void reverse_array(int* a, int n);
/* reverse the contents of array*/

char *string_toupper(char* str);
/* change lowercase to uppercase*/

char *cap_string(char* s);
/* change word to uppercase*/

char *leet(char *s);
/* encode string in 1337 leet */

char *rot13(char* s);
/* encodes with rot13*/

void print_number(int n);
/* print an int without using long, arrays, or pointers*/

char *_memset(char *s, char b, unsigned int n);
/* fills 'n' num of memory with constant byte 'b'*/

char *_memcpy(char *dest, char *src, unsigned int n);
/* copies 'n' byte of memory from 'src' to 'dest'*/

char *_strchr(char *s, char c);
/* finds character 'c' in string 's'*/

unsigned int _strspn(char *s, char *accept);
/* Returns the num of bytes in initial part of 's' made up of bytes only from 'accept'*/

char *_strpbrk(char *s, char *accept);
/* Searches a string for a set of bytes*/

char *_strstr(char *haystack, char *needle);
/* finds substring 'needle' in "haystack"*/

void print_chessboard(char (*a)[8]);
/* print a chessboard */

void set_string(char **s, char *to);
/* set value of a pointer to char*/

void _puts_recursion(char *s);
/* prints a string to stdout ff by new line*/

void _print_rev_recursion(char *s);
/* print a string in reverse */
#endif
