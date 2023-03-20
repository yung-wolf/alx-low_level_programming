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
	dog_t *dog;
	char *cpy_name;
	char *cpy_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	cpy_name = malloc(sizeof(dog->name));
	cpy_name = name;
	cpy_owner = malloc(sizeof(dog->owner));
	cpy_owner = owner;

	return (dog);
}
