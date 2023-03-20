#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - models a dog
 * @name: first member
 * @age: second member
 * @owner: Third member
 *
 * Description: Holds basic info about a dog
 * Return: init dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *cpy_name;
	char *cpy_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	cpy_name = malloc(sizeof(dog1->name));
	cpy_name = name;
	cpy_owner = malloc(sizeof(dog1->owner));
	cpy_owner = owner;

	return (dog1);
}
