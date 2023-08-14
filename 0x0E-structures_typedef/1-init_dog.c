#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include "dog.h"
/**
 * init_dog - a function that initialize struct
 * @d : a pointer to struct
 * @name : a name to initialize
 * @age :age to initialize
 * @owner : owner to initialize
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
