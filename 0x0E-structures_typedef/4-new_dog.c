#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * dog_t new_dog - models a dog
 * @name: first member
 * @age: second member
 * @owner: Third member
 *
 * Description: Holds basic info about a dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
