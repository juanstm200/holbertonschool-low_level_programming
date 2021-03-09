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

/*  function that initialize a variable of type struct dog */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* Write a function that frees dogs. */
void free_dog(dog_t *d);

#endif
