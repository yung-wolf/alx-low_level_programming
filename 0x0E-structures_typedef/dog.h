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
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
