#include <stdio.h>
#include "dog.h"

/**
 * print_dog -  function that prints a struct dog
 * @d: data type from dog.h
 *
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL || d->owner == NULL)
	{
		printf("Name: (nil)\n");
		printf("Age: %f\n", d->age);
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
