#include<stdlib.h>
#include "dog.h"
#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - a function that initialize struct
 * @d : a struct
 * @name : a name
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

