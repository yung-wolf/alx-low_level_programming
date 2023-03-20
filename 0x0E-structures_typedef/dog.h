#ifndef DOG_H
#define DOG_H

/**
 * struct dog - models a dog
 * @name: first member
 * @age: second member
 * @owner: Third member
 *
 * Description: Holds basic info about a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
