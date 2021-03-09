#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data type of struct
 * @name: first name
 * @age: age of dog
 * @owner: name of person
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* function that prints a struct dog */
void print_dog(struct dog *d);

#endif
