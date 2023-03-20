#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 * Return: initialized instance of struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog_t)); /* validate if dog1 initiated correctly */
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	/* make copies of struct members and validate, else free on error */
	/* set values of struct members to copies of arguments or set to NULL */
	
	return (dog1);
}
