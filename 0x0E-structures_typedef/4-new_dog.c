#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * len - get length of string
 * @string: string
 * Return: length
 */

int len(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
		;
	return (i);
}

/**
 * strcpy - copies one string to another
 * @dest: new file to accept copied string
 * @src: source string to copy
 * Return: copy of source string
 */
char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= len(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - models a dog
 * @name: first member
 * @age: second member
 * @owner: Third member
 * Description: Holds basic info about a dog
 * Return: init dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_cpy;
	char *owner_cpy;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->age = age;

	if (name != NULL)
	{
		name_cpy = malloc(len(name) + 1);
		if (name_cpy == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->name = strcpy(name_cpy, name);
	}
	else
		dog->name = NULL;
	if (owner != NULL)
	{
		owner_cpy = malloc(len(owner) + 1);
		if (owner_cpy == NULL)
		{
			free(name_cpy);
			free(dog);
			return (NULL);
		}
		dog->owner = strcpy(owner_cpy, owner);
	}
	else
		dog->owner = NULL;

	return (dog);
}
