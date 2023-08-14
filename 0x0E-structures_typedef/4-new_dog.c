#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * _strlen - returns the length of string
 *  @s : string to evaluate
 * Return: a pointer (SUCCESS), NULL fail
*/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strcpy - copy string in string pointed to
 * by src including the terminating
 * null byte (\0)
 * to the buffer pointed by the dest
 *  @dest :  pointer to the buffer in which the string exists
 *  @src : string to be copied
 * Return: the pointer to dest
*/
char *_strcpy(char *src, char *dest)
{
int l3, i;

l3 = 0;
while (src[l3] != '\0')
{
	l3++;
}
for (i = 0; i < l3; i++)
{
	dest[i] = src[i];
}
dest[i] = '\0';
return (dest);
}
/*
 * new_dog -  a function that creates a new dog
 * @name : name of the dog
 * @age : age of th dog
 * @owner : owner of the dog
 * Return: a pointer (SUCCESS), NULL fail
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
l2 = _strlen(owner);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
	return (NULL);
dog->name = malloc(sizeof(char) * (l1 + 1));
if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
dog->owner = malloc(sizeof(char) * (l2 + 1));
if (dog->owner == NULL)
{
	free(dog);
	free(dog->name);
	return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner, owner);
dog->age = age;
return (dog);
}
